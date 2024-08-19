// NESTED FOR LOOP NUMBERS FROM 0 TO 5 REPEATED TEN TIMES CODE

#include <iostream>
#include <string>

int main() {

    int number;

    for (int i = 1; i <= 10; i++) {
        for (int number = 0; number <= 5; number++) {
            std::cout << number << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}