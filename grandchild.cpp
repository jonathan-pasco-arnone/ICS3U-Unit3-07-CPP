// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines whether the user can date the grandchild

#include <iostream>

int main() {
    // This function determines whether the user can date the grandchild

    int age;

    std::cout << "" << std::endl;
    std::cout << "I am going to determine whether you"
          " can date my grandchild" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "" << std::endl;

    if ((age >= 25) && (age <= 40)) {
        std::cout << "You may date my grandchild" << std::endl;

    } else if (age > 40) {
        std::cout << "You are too old" << std::endl;

    } else if ((age < 25) && (age > 0)) {
        std::cout << "You are too young" << std::endl;

    } else {
        std::cout << "Please enter an actual age" << std::endl;
    }
}
