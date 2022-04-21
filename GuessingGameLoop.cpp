// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on April 2022
// This program makes a guessing game

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function makes a guessing game
    std::string guessNumberString;
    int guessNumber;
    int mysteryNumber = 5;



    // input, process & output
    while (true) {
        try {
            std::cout << "Guess a number between 0-9: ";
            std::cin >> guessNumberString;
            guessNumber = std::stoi(guessNumberString);
            if (guessNumber == mysteryNumber) {
                std::cout << "\nYou guessed correctly!" << std::endl;
                break;
            } else if (guessNumber > mysteryNumber) {
                    std::cout << "That number is too high, guess lower."
                    << std::endl;
                } else {
                    std::cout << "That number is too low, guess higher."
                    << std::endl;
                    }
        }catch (std::invalid_argument) {
            std::cout << "That was not a integer from 0-9.";
    }
    }
    std::cout << "\nDone." << std::endl;
}
