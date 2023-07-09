// TablaDeClasificacion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> climbingLeaderboardFirst(std::vector<int>& ranked, std::vector<int>& player) {
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
    std::vector<int> result;
    for (int i = 0; i < player.size(); i++) {
        int indice = 0;
        while (player[i] < ranked[indice] || indice == ranked.size()) {
            indice++;
        }
        if (player[i] < ranked[ranked.size() - 1]) {
            result.push_back(ranked.size() + 1);
        }
        else {
            result.push_back(indice + 1);
        }

    }

    return result;
}

std::vector<int> climbingLeaderboardOptimized(std::vector<int>& ranked, std::vector<int>& player) {
    std::vector<int> result;
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
    int indice = ranked.size() - 1;

    for (int i = 0; i < player.size(); i++) {
        while (indice >= 0 && player[i] >= ranked[indice]) {
            indice--;
        }
        result.push_back(indice + 2);
    }

    return result;
}

int main()
{
    std::cout << "Hello World!\n";
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
