// NESTED FOR LOOP NUMBERS FROM 0 TO 50 REPEATED FIVE TIMES CODE

#include <iostream>
#include <string>

int main() {

    int number;

    for (int i = 1; i <= 5; i++) {
        for (int number = 0; number <= 50; number++) {
            std::cout << number << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}