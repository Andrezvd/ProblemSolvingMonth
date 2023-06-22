// DinamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> dynamicArray(int n, std::vector<std::vector<int>> queries) {
    int lastResult = 0;
    std::vector<std::vector<int>> result(n, std::vector<int>());
    std::vector<int> trueresult;
    for (int i = 0; i < queries.size(); ++i)
    {
        if (queries[i][0] == 1) {
            int x = queries[i][1];
            int y = queries[i][2];
            int indice = (x ^ lastResult) % n;
            result[indice].push_back(y);
        }
        else {
            int x = queries[i][1];
            int y = queries[i][2];
            int indice = (x ^ lastResult) % n;
            lastResult = result[indice][y % result[indice].size()];
            trueresult.push_back(lastResult);
        }

    }
    return trueresult;
}

int main()
{
    int n, q; std::cin >> n;
    std::vector<std::vector<int>> queris(n,std::vector<int>(3));
        
    for (int  i = 0; i < queris.size(); i++)
    {
        for (int j = 0; j < queris.size(); j++)
        {
            int w; std::cin >> w;
            queris[i].push_back(w);
        }
    }
    
    dynamicArray(n, queris);

}

