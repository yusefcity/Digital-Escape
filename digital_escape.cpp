#include <iostream>
#include <cstdlib>
#include <ctime>

int generateCode() {
    return std::rand() % 5 + 1;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int energy = 5;
    int score = 0;

    std::cout << "=== Digital Escape ===\n";

    while (energy > 0) {
        int target = generateCode();
        int guess;

        std::cout << "\nGuess the access code (1-5): ";
        std::cin >> guess;

        if (guess == target) {
            std::cout << "Access granted!\n";
            score += 15;
        } else {
            std::cout << "Access denied.\n";
            energy--;
        }

        std::cout << "Energy: " << energy << "\n";
        std::cout << "Score : " << score << "\n";
    }

    std::cout << "\nSimulation ended.\n";
    std::cout << "Final score: " << score << "\n";

    if (score >= 30)
        std::cout << "Mission successful!\n";
    else
        std::cout << "Better luck next time.\n";

    return 0;
}
