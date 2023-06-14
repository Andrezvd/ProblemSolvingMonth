// NumeroNorepetido.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int lonelyinteger(std::vector<int>& a) {
    int result = 0;
    for (int num : a) {
        result ^= num;
    }
    return result;
}

int main()
{
    std::vector<int> v(10);
    
    for (int i = 0; i < v.size(); i++)
    {
        int x; std::cin >> x;
        v.push_back(x);
    }
    std::cout << lonelyinteger(v);
}



