#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // random number generator
    std::srand(std::time(0));

    // generate random number 1 - 100
    int randomNumber = std::rand() % 100 + 1;

    int guess;
    int guessCount = 0;

    std::cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guessCount++;

        if (guess > randomNumber) {
            std::cout << "Too high, try again." << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low, try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << guessCount << " guesses." << std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}