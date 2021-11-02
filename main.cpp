// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program will convert number to month

#include <iostream>

int main() {
    // This function inputs integer and outputs month equivalent
    // define variables
    int integer;

    // input
    std::cout << "Enter number of a month(ex: 3 for March): " << std::endl;
    std::cin >> integer;

    // process/output
    if (integer == 1) {
        std::cout << "January" << std::endl;
    } else if (integer == 2) {
        std::cout <<  "February" << std::endl;
    } else if (integer == 3) {
        std::cout <<  "March" << std::endl;
    } else if (integer == 4) {
        std::cout <<  "April" << std::endl;
    } else if (integer == 5) {
        std::cout <<  "May" << std::endl;
    } else if (integer == 6) {
        std::cout <<  "June" << std::endl;
    } else if (integer == 7) {
        std::cout <<  "July" << std::endl;
    } else if (integer == 8) {
        std::cout <<  "August" << std::endl;
    } else if (integer == 9) {
        std::cout <<  "September" << std::endl;
    } else if (integer == 10) {
        std::cout <<  "October" << std::endl;
    } else if (integer == 11) {
        std::cout <<  "November" << std::endl;
    } else if (integer == 12) {
        std::cout <<  "December" << std::endl;
    } else {
        std::cout << "Not a valid month number"  << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
