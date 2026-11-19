#include <iostream>
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "Actually "<< number << " is an even number!" << std::endl;
        // If number inputted is zero
    }

        else if (number % 2 == 0) {
            std::cout << number << " is an even number" << std::endl;
            //If number is even
    }

        else {
            std::cout << number << " is an odd number" << std::endl;
            //If number is odd
    }

    return 0;
}