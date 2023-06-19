// ZigZag.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

void findZigZagSequence(std::vector < int >& a, int n) {
    sort(a.begin(), a.end());
    int mid = (n - 1) / 2;
    std::swap(a[mid], a[n - 1]);

    int st = mid + 1;
    int ed = n - 2;
    while (st <= ed) {
        std::swap(a[st], a[ed]);
        st = st + 1;
        ed = ed - 1;
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) std::cout << " ";
        std::cout << a[i];
    }
    std::cout << std::endl;
}

int main() {
    int n, x;
    int test_cases;
    std::cin >> test_cases;

    for (int cs = 1; cs <= test_cases; cs++) {
        std::cin >> n;
        std::vector < int > a;
        for (int i = 0; i < n; i++) {
            std::cin >> x;
            a.push_back(x);
        }
        findZigZagSequence(a, n);
    }
}