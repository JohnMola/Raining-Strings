#include "raining.hpp"
#include <iostream>

void printBusinesses(const std::vector<std::string>& businesses) {
   if (businesses.size() == 1) {
      std::cout << "\nYour business is:\n\n";
   } else {
      std::cout << "\nYour businesses are:\n\n";
   }
   for (const auto& b : businesses) {
      std::cout << "    " << b << "\n";
   }
   std::cout << std::endl;
}

bool wantsAnother(const std::string& response) {
   return (response == "y" || response == "Y" ||
           response == "yes" || response == "Yes");
}
