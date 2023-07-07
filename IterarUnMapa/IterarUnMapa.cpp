// IterarUnMapa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>


std::string isValid(std::string s) {
    if (s.length() <= 3) {
        return "YES";
    }

    std::map<char, int> m;

    for (char c : s) {
        m[c]++;
    }

    int count = 0;
    int commonCount = m.begin()->second;

    for (const auto& pair : m) {
        if (pair.second != commonCount) {
            count++;
            if (count > 1 || (count == 1 && (pair.second - 1 > commonCount || pair.second > commonCount + 1))) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main()
{
    std::string s {"sdjkaksdjhlkahjsdshdhdhhddhasjdkasd"};

    isValid(s);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
