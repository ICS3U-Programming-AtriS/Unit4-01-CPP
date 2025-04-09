// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: April 8, 2025
// Program that calculates the sum of 1 + 2 + 3... + n,
// where n is a positive integer given by the user.
// The sum will be calculated through the use of a while loop.

#include <cstdio>
#include <iostream>
#include <string>

int main() {
    // Get the user's input as a string
    std::string userInput;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, userInput);

    try {
        // Convert the user's input to an integer
        int userNum = std::stoi(userInput);

        // REFUSE FLOATS
        if (userInput.find('.')) {
            throw std::invalid_argument("NO FLOATS");
        }

        // Check if the user's number is positive
        if (userNum > 0) {
            // Initialize variables for the loop
            int sum = 0;
            int counter = 0;
            // Loop while counter is less than user_num
            while (counter < userNum) {
                // Increment counter by 1
                counter += 1;
                // Add counter to sum
                sum += counter;
            }
            // Display the sum
            printf("The sum of numbers from 0 to %i", userNum);
            printf(" = %i\n", sum);
        } else {
            // Tell the user that the number must be positive
            printf("Number must be a positive integer.\n");
        }
    } catch (std::invalid_argument) {
        // Tell the user that their input wasn't an integer
        std::cout << userInput;
        std::cout << " is not an integer.\n";
    }
    // Program completion message
    printf("Thanks for playing!\n");
}
