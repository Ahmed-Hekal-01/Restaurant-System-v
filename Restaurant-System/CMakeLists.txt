cmake_minimum_required(VERSION 3.29)
project(Restaurant_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(Restaurant_System
        Admin.cpp
        all_restaurant.cpp
        Bank-account.cpp
        Customer.cpp
        Drinks.cpp
        Food.cpp
        Restaurant-System.cpp
        "Shared data.cpp"
        Sweet.cpp
        all_restaurant.cpp
        Drinks.cpp)
