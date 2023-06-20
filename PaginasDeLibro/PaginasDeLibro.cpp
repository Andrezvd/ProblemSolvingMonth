// PaginasDeLibro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

int pageCount(int n, int p) {
    int fromStart = p / 2;
    int fromEnd = (n / 2) - (p / 2);
    return std::min(fromStart, fromEnd);
}

int main()
{
    int x; std::cin >> x;
    pageCount(x);
}
