// Sum vs XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


long sumXor(long n) {
    // Contar el n�mero de ceros en la representaci�n binaria de n
    int zeroCount = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            zeroCount++;
        }
        n >>= 1;
    }

    // Calcular el n�mero de combinaciones posibles
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








