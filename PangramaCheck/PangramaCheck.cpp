// PangramaCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <set>
#include <unordered_set>

std::string pangrams(const std::string& s) {
    std::unordered_set<char> uniqueLetters;

    for (char c : s) {
        //SI ES UN CARACTER ->
        if (std::isalpha(c)) {
            //A MINUSCULAS EN EL CONJUNTO
            uniqueLetters.insert(std::tolower(c));
        }
    }

    if (uniqueLetters.size() == 26) {
        return "pangram";
    }
    else {
        return "not pangram";
    }
}

int main()
{
    std::string s;
    std::getline(std::cin, s);
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        return std::isspace(c);
        }), s.end());
    std::transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) { return std::tolower(c); });

    std::set<char> uniqueLetters(s.begin(), s.end());

    std::cout << uniqueLetters.size()<<std::endl;

    if (uniqueLetters.size() < 26) {
        std::cout<<"No paragram";
    }
    else {
        std::cout << "paragram";
    }
}


/*vector<char> alphabet;

char start = 'A'; // Letra inicial
char end = 'Z';   // Letra final

for (char c = start; c <= end; ++c) {
    alphabet.push_back(c);
}*/

