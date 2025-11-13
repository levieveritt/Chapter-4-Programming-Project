#include <iostream>
#include <string>

int main() {
    // Pattern A
    for (int i = 1; i <= 10; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl; // newline

    // Pattern B
    for (int i = 10; i >= 1; --i) {
        for (int k = 10; k > i; --k) {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}