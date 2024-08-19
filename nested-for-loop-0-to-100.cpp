// NESTED FOR LOOP NUMBERS FROM 0 TO 100 REPEATED TWICE CODE 

#include <iostream>
#include <string>

int main()
{
    int number;

    for (int i = 1; i <= 2; i++) {
        for (int number = 0; number <= 100; number++) {
            std::cout << number << ' ';
        }
        std::cout << '\n';
    }

    return 0;

}