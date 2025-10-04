#include "src/raining.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Welcome to the Business Sorting Program!\n" << std::endl;

    std::vector<std::string> businesses;
    std::string input;
    std::string response;

    while (true) {
        std::cout << "Please enter the name of a business:  ";
        std::getline(std::cin, input);

        businesses.push_back(input);
        std::ranges::sort(businesses);

        printBusinesses(businesses);

        std::cout << "Another business?  ";
        std::getline(std::cin, response);

        if (!wantsAnother(response)) {
            break;
        }
    }

    std::cout << "\nThank you for using the Business Sorting Program!" << std::endl;
    return 0;
}
