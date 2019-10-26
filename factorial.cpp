// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program lets user to multiply total of number of loops made

#include <iostream>
#include <string>


int main() {
    // This function lets user to multiply total of number of loops made
    std::string num;
    int total = 1;
    int numCheck;

    // Input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> num;
    std::cout << "" << std::endl;

    // process & output
     try {
        numCheck = std::stoi(num);
        do {
            total = total * numCheck;
            numCheck -= 1;
            std::cout<< total << std::endl;
         }while(numCheck > 1);
    }catch (std::invalid_argument) {
        std::cout << "Invalid number";
     }
}
