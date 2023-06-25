// Sum vs XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


long sumXor(long n) {
    // Contar el número de ceros en la representación binaria de n
    int zeroCount = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            zeroCount++;
        }
        n >>= 1;
    }

    // Calcular el número de combinaciones posibles
    long combinations = 1L << zeroCount;

    return combinations;
}

int main() {
    long n;
    std::cin >> n;

    long result = sumXor(n);
    std::cout << result << std::endl;

    return 0;
}








