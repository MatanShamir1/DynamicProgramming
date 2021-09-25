#include <stdio.h>
#include <iostream>
#include "DynamicProgramming.h"

void printMenu();

int main() {
    printMenu();
    char choice;
    do {
        std::cin >> choice;
        /*in every loop, the user enters a choice and each function is called according to the choice
        using switch-case.*/
        switch (choice) {
            //if the user entered '0', we need to free all allocated memory and end the program.
            case ('0'):
                return 0;
            case ('1'):
                int num;
                std::cout << "select a number to find out the minimum amount of squares that combine it:" << std::endl;
                std::cin >> num;
                std::cout << minSquares(num) << std::endl;
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
                break;
            case ('2'):
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
                break;
            case ('3'):
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
                break;
            case ('4'):
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
                break;
            case ('5'):
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
                break;
            case ('6'):
                printMenu();
                break;
            default:
                //the default is unrecognized operation.
                std::cout << "Error: unrecognized operation." << std::endl;
                std::cout << "Select the next operation (insert 6 for the entire menu):" << std::endl;
        }
        //the while loop goes on until the user entered '0'.
    } while (choice != '0');
}

void printMenu() {
    std::cout << "Please select a dynamic program:\n\t0. Exit.\n\t1. Minimum squares problem.\n\t"
                 "2. LCS.\n\t3. ???\n\t4. ???"
                 "\n\t5. ???\n\t6. Print the menu." << std::endl;
}
