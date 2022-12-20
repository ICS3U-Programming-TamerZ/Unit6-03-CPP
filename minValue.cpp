// Copyright (c) 2022 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Created on: Jan. 29, 2022
// This program uses a for loop to generate and
// print random numbers in a list, then
// displays the largest value

#include <array>
#include <ctime>
#include <iostream>
#include <random>

// this function calculates the smallest value in the array of elements
template <size_t MAX_ARRAY_SIZE>
int FindMinValue(std::array<int, MAX_ARRAY_SIZE> ranNums) {
    int min = ranNums[0];

    for (int randomNumber : ranNums) {
        if (min > randomNumber) {
            min = randomNumber;
        }
    }
    return min;
}

int main() {
    // declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initializing counter
    int counter = 0;

    // declaring variables
    std::array<int, MAX_ARRAY_SIZE> ranNumsUser;
    int minUser;

    // insert comment here
    srand(time(NULL));

    // display opening message
    std::cout << "This program generates a list of random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "then determines the smallest number.";
    std::cout << std::endl;
    std::cout << std::endl;

    // displays random numbers and calculates average
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        int randomNumber = (rand() % (MIN_NUM, MIN_NUM + MAX_NUM));

        ranNumsUser[counter] = randomNumber;
        std::cout << ranNumsUser[counter];
        std::cout << " added to the list at position " << counter;
        std::cout << std::endl;
    }

    minUser = FindMinValue(ranNumsUser);
    std::cout << std::endl;
    std::cout << "The min value is: " << minUser;
}
