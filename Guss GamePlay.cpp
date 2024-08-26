#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        while (!(std::cin >> guess)) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
