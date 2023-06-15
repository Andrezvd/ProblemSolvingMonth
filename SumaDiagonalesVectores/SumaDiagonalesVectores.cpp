// SumaDiagonalesVectores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#define foreach(v) for(int i = 0; i < v.size(); i++)

int diagonalDifferenceOptimized(std::vector<std::vector<int>> arr) {
    int totalLeft = 0;
    int totalRight = 0;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        totalLeft += arr[i][i];
        totalRight += arr[i][n - 1 - i];
    }

    return abs(totalLeft - totalRight);
}
int diagonalDifference(std::vector<std::vector<int>> arr) {
    int totalLeft = 0, totalRight = 0;
    for (int i = 0; i < arr.size(); ++i) {
        totalLeft += arr[i][i];
    }
    int w = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        totalRight += arr[w][i];
        w++;
    }
    return abs(totalLeft - totalRight);
}



int main()
{
    std::vector<std::vector<int>> v;

    foreach(v)
    {
        std::vector<int> row;
        foreach(row)
        {
            int x;
            std::cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

}
