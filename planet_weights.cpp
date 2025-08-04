/* This program takes a user-inputted weight in pounds and converts it to see what 
the user would weigh on a planet of their choosing (no input validation, just a simple exercise) */

#include <iostream>
#include <string>

int main() {

  // Declare variables  
  double weightE; // Earth weight
  double weightMerc; // Mercury weight
  double weightMars; // Mars weight
  double weightJup; // Jupiter weight
  double weightSat; // Saturn weight
  double weightUra; // Uranus weight
  double weightNep; // Neptune weight
  double weightPlu; // Pluto weight
  std::string answer; // allows input of a string for the user to choose a planet

  // Asking the user to input their weight
  std::cout << "Enter your weight in pounds\n> ";
  std::cin >> weightE;

  // Weight conversions
  weightMerc = weightE * 0.38;
  weightMars = weightE * 0.38;
  weightJup = weightE * 2.4;
  weightSat = weightE * 1.08;
  weightUra = weightE * 0.98;
  weightNep = weightE * 1.14;
  weightPlu = weightE * 0.65;
  
  

  while (answer != "Exit") {

    std::cout << "Which planet do you want to see how much you weigh on (Enter it with a capital first letter)? Type 'Exit' to quit\n> ";
    std::cin >> answer;

    if (answer == "Exit") {
        break;
    } else if (answer == "Mercury") {
        std::cout << "Your weight on Mercury is " << weightMerc << " pounds\n";
    } else if (answer == "Mars") {
        std::cout << "Your weight on Mars is " << weightMars << " pounds\n";
    } else if (answer == "Jupiter") {
        std::cout << "Your weight on Jupiter is " << weightJup << " pounds\n";
    } else if (answer == "Saturn") {
        std::cout << "Your weight on Saturn is " << weightSat << " pounds\n";
    } else if (answer == "Uranus") {
        std::cout << "Your weight on Uranus is " << weightUra << " pounds\n";
    } else if (answer == "Neptune") {
        std::cout << "Your weight on Neptune is " << weightNep << " pounds\n";
    } else if (answer == "Pluto") {
        std::cout << "Your weight on Pluto is " << weightPlu << " pounds\n";
    } else {
        std::cout << "Invalid Input. Please resubmit a proper planet (excluding Earth)\n";
    }

  }
  
}
