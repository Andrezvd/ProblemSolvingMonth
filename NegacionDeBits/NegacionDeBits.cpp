// NegacionDeBits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned long flippingBits(unsigned long n) {
    return ~n & 0xFFFFFFFF;
}

int main() {
    unsigned long number = 1;
    unsigned long flippedNumber = flippingBits(number);

    std::cout << "Flipped Number: " << flippedNumber << std::endl;

    return 0;
}