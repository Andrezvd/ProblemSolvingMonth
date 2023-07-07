// NewYearChaos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <iterator>


void minimumBribes(std::vector<int> q) {
    int n = q.size();
    int bribes = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            std::cout << "Too chaotic" << std::endl;
            return;
        }

        for (int j = std::max(0, q[i] - 2); j < i; j++) {
            if (q[j] > q[i]) {
                bribes++;
            }
        }
    }

    std::cout << bribes << std::endl;
}

int main()
{
    std::vector<int> v 
    {2,1,3,5,4,7,8,6};

    minimumBribes(v);
}


