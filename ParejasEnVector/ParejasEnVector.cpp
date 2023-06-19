// ParejasEnVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int count = 0;
    for (int i = 0; i < ar.size() - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            count++;
            i++;
        }
    }

    return count;
}

int main()
{
    vector<int>v {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 5, 5, 5};
    vector<int>x {1, 1, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6};

    cout << sockMerchant(13,v);
    cout << sockMerchant(20, x);
}

