#include <iostream>

int main() {

  // Allow user to enter dog's name
  std::string dog_name;
  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;

  // Allow user to enter dog's age with decimal
  double dog_age;
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;

  double early_years, later_years, human_years;

  // First two years
  early_years = 21;

  // Accounts for later years
  later_years = (dog_age - 2 ) * 4;

  // My logic for puppy math
  if (dog_age < 2) {
    early_years = (early_years / 2) * dog_age;
    later_years = 0;
  }

  human_years = later_years + early_years;

  std::cout << "\nMy name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";
  std::cout << "Bow wow wow yippie yo yippie yay\n";

}
