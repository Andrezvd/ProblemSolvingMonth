// Suma Recursiva toString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>

int superDigit(std::string n, int k) {

    if (n.length() == 1) {
        return stoi(n);
    }

    int total = 0;
    
    for (char x : n) {
        total += atoi(&x);
    }

    total *= k;

    return superDigit(std::to_string(total), 1);
}

int main() {

    std::string n;
    int k;

    std::getline(std::cin, n);

 


    int result = superDigit(n,k);
    std::cout << "El dígito recursivo de " << n << " es: " << result << std::endl;

    return 0;
}

