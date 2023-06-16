// PermutacionDearrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

#define foreach(v) for(int i = 0; i < v.size(); i++)

std::string twoArrays(int k, std::vector<int>& A, std::vector<int>& B) {
    std::sort(A.begin(), A.end());
    std::sort(B.rbegin(), B.rend());

    for (int i = 0; i < A.size(); i++) {
        if (A[i] + B[i] < k) {
            return "NO";
        }
    }

    return "YES";
}


int main()
{
    std::vector<int> A;
    std::vector<int> B;

    foreach(A)
    {
        int x;
        std::cin >> x;
        A.push_back(x);
    }
    foreach(B)
    {
        int x;
        std::cin >> x;
        B.push_back(x);
    }
    twoArrays(10,A, B);
}

