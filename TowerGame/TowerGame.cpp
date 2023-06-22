// TowerGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int towerBreakers(int n, int m) {


    if (n % 2 == 0 || m == 1)
        return 2;
    else
        return 1;
}

int main()
{
    int a, b; std::cin >> a >> b;
    towerBreakers(a, b);
}

