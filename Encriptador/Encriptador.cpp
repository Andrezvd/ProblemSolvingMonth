// Encriptador.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string caesarCipher(std::string s, int k) {
    int n = s.length();
    k %= 26;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {

            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = base + (s[i] - base + k) % 26;

        }
    }

    return s;
}

int main()
{
    std::string s;

    std::getline(std::cin, s);
}


