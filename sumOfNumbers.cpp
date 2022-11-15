// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 14, 2022
// This program sums up all of the digits from 0 to the user input

#include <iostream>

int main() {
    // initialize all required variables
    int counter = 0;
    int sum = 0;
    std::string user_num_str;

    // get user input
    std::cout << "Please enter a positive integer: ";
    std::cin >> user_num_str;

    // check if the input is a valid integer
    try {
        int user_num_int = std::stoi(user_num_str);
        float user_num_float = std::stof(user_num_str);

        // check if the input is a whole number
        if (user_num_float == user_num_int) {
            // check if the number is positive
            if (user_num_int < 0) {
                std::cout << "please enter a positive integer\n";
            } else {
                // repeats until counter is counter is greater than the input
                while (counter <= user_num_int) {
                    // adds counter to the sum
                    sum += counter;
                    // increment counter by 1
                    counter++;
                    // tell the user how many times the code
                    // runs through the loop
                    std::cout << "Tracking " << counter
                    << " times through the loop\n";
                }
                // output the result of the program
                std::cout << "The sum of all numbers from 0 to " << user_num_int
                          << " is  " << sum << "\n";
            }
        } else {
            std::cout << "Please enter a valid integer\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid integer\n";
    }
}
