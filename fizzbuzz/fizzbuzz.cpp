
#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << "\n";
            continue;
        }
        if (i % 3 == 0) {
            std::cout << "Fizz" << "\n";
            continue;
        }
        if (i % 5 == 0) {
            std::cout << "Buzz" << "\n";
            continue;
        }
        std::cout << i << "\n";
    }
    return 0;
}
