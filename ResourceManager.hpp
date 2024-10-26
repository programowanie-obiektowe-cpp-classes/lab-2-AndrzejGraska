#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    std::unique_ptr< Resource > test;

public:
    ResourceManager() : test(std::make_unique< Resource >()) {}

    ResourceManager(const ResourceManager& input1) : test(std::make_unique< Resource >(*input1.test))
    {}
    ~ResourceManager()
    {
        
    }
    double get() { return test->get(); }

    ResourceManager& operator=(const ResourceManager& test_trudny)
    {
        test = std::make_unique< Resource >(*test_trudny.test);
        return *this;
    }
    // Zad 3
    ResourceManager(ResourceManager&& input1) : test(std::move(input1.test)){}
    ResourceManager& operator=(ResourceManager&& test_bardzo_trudny)
    {
        test = std::move(test_bardzo_trudny.test);
        return *this;
    }
};
