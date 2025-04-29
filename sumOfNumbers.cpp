// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Apr. 28, 2025
/* This program asks the user to enter a positive
integer. It then calculates the sum of numbers from 0
up to that integer. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

// Runs the main function.
int main() {
    // Initialize the loop counter to zero.
    int loopCounter = 0;
    // Initialize the sum to zero.
    int sum = 0;

    // Declare the user number variable as a string.
    std::string userNumberStr;
    // Ask the user to enter a positive integer.
    std::cout << "\nEnter a positive integer: ";
    // Store the input as a string.
    std::cin >> userNumberStr;

    /* Try to validate and proceed with the
    user's input. */
    try {
        /* Attempt to convert the entered string 
        into a float for further validation. */
        float userNumberFloat = stof(userNumberStr);

        /* Check if the float and its casted integer version
        are equal, meaning it is an integer, and check if the
        number is greater than 0. */
        if (userNumberFloat == static_cast<int>(userNumberFloat)
        && userNumberFloat > 0) {
            // Proceed to the while loop to determine the sum of numbers.
            while (loopCounter <= userNumberFloat) {
                // Add the loop counter to the sum.
                sum = sum + loopCounter;
                // Increment the loop counter by one.
                loopCounter = loopCounter + 1;
            }
            /* Display the sum of numbers from 0 up to the desired number
            to the user. */
            std::cout << "\nThe sum of numbers from 0 to " << userNumberFloat
            << " is " << sum << ".\n";
        } else {
            /* Otherwise, the user entered a negative 
            integer, zero, or a float. */
            /* Display to the user that they did not
            enter a positive integer. */
            std::cout << "\n" << userNumberFloat
            << " is not a positive integer.\n";
        }
    }
    /* Runs if std::stoi() could not convert the user's string
    input into an integer. */
    catch (std::invalid_argument) {
        /* Display to the user that they did not
        enter a positive integer. */
        std::cout << "\n" << userNumberStr
        << " is not a positive integer.\n";
    }

    // Finally, thank the user for using this program.
    std::cout << "\nThanks for using this program!\n";
}
