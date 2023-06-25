// McdMcmInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}


int getTotalX(vector<int> a, vector<int> b) {

    int mcmX = a[0];
    for (int i = 1; i < a.size(); i++) {
        mcmX = mcm(mcmX, a[i]);
    }

    int mcdX = b[0];
    for (int i = 1; i < b.size(); i++) {
        mcdX = mcd(mcdX, b[i]);
    }

    int count = 0;
    int multiple = mcmX;
    while (multiple <= mcdX) {
        if (mcdX % multiple == 0) {
            count++;
        }
        multiple += mcmX;
    }
    return count;

}

int main()
{
    std::cout << "Hello World!\n";
}

