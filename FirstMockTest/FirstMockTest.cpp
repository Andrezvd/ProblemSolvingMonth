// FirstMockTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int flippingMatrix(std::vector <std::vector<int >> matrix) {
    int total = 0;
    int n = matrix.size() / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int aizq = matrix[i][j];
            int ader = matrix[i][2 * n - 1 - j];
            int abizq = matrix[2 * n - 1 - i][j];
            int abder = matrix[2 * n - 1 - i][2 * n - 1 - j];

            total += std::max({ aizq,ader,abizq,abder });

        }
    }
    return total;
}


int main()
{
    std::vector <std::vector<int>> matrix = {
        {40,56,118,200},
        {32,72,65,70},
        {12,130,35,29},
        {150,220,105,16}
    };

    std::cout << flippingMatrix(matrix);
}

