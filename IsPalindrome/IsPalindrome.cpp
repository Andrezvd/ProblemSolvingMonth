// IsPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool ispal(const string& s) {
    int izq = 0;
    int der = s.size() - 1;
    while (izq < der) {
        if (s[izq] != s[der]) {
            return false;
        }
        izq++;
        der--;
    }
    return true;
}

int palindromeIndex(string& s) {

    if (ispal(s)) {
        return -1;
    }

    int left = 0;
    int rigth = s.size() - 1;

    while (left < rigth) {
        if (s[left] != s[rigth]) {
            if (ispal(s.substr(0, left) + s.substr(left + 1))) {
                return left;
            }
            else if (ispal(s.substr(0, rigth) + s.substr(rigth + 1))) {
                return rigth;
            }
        }
        left++;
        rigth--;
    }

    return -1;
}
