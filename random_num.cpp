#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // Seed random number generator
    int secret = std::rand() % 100 + 1; // Random number 1-100
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have chosen a number between 1 and 100. Try to guess it!\n";

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secret) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secret) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed it in "
                      << attempts << " attempts.\n";
        }
    }

    return 0;
}