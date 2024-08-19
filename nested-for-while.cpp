// NESTED FOR WHILE LOOP CODE 

#include <iostream>
#include <string>

int main() {

    int rows = 5;
    int columns = 5;

    for (int i = 1; i <= rows; ++i) {
        int j = 1;

        while (j <= columns) {
            std::cout << i * j << "\t";
            ++j;
        }

        std::cout << '\n';
    }

    return 0;
}