// CountingSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define foreach(v) for(int i = 0; i < v.size(); i++)

std::vector<int> primeraSolucion(const std::vector<int>& v){
    std::vector<int> numeros(100);
    std::vector<int> result(100, 0);
    std::iota(numeros.begin(), numeros.end(), 0);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (numeros[i] == v[j]) {
                result[i]++;
            }
        }
    }
    return result;
}

std::vector<int> countingSort(const std::vector<int>& arr) {
    std::vector<int> count(100, 0);  // Vector para almacenar las frecuencias de los elementos (inicializado con ceros)

    for (int num : arr) {
        if (num >= 0 && num < 100) {
            count[num]++;  // Incrementa la frecuencia del elemento num
        }
    }

    return count;
}

int main()
{
    std::vector<int> v;

    foreach(v)
    {
        int x;
        std::cin>>x;
        v.push_back(x);
    }
    countingSort(v);
}

