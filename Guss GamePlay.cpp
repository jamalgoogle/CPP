#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


int main() {
   std::srand(static_cast<unsigned int>(std::time(nullptr)));  // seed the random number generator

   int secretNumber = std::rand() % 100 + 1;  // generate a random number between 1 and 100
   int guess;  
   int attempts = 0;

   std::cout << "Welcome to the Number Guessing Game!" << std::endl;  // print a welcome message
   std::cout << "I'm thinking of a number between 1 and 100." << std::endl;  // print a hint message

   do {
      std::cout << "Enter your guess: ";  // print a prompt message
      while (!(std::cin >> guess)) {  // read the user's guess
         std::cout << "Invalid input. Please enter a number between 1 and 100." << std::endl;  // print an error message
         std::cin.clear();  // clear the error flag
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore the invalid input
      }
      attempts++;  // increment the number of attempts

      if (guess < secretNumber) {
         std::cout << "Too low. Try again." << std::endl;
      } else if (guess > secretNumber) {
         std::cout << "Too high. Try again." << std::endl;  // print a hint message
      } else {
         std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << std::endl;  // print a congratulatory message
      }

   } while (guess != secretNumber);

   std::cout << "Press Enter to exit...";  // print a prompt message
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore the newline character
   std::cin.get();  // wait for the user to press Enter

   return 0;
}
//thanks for readeing mycode
//youtube --> @jamalgoogle
