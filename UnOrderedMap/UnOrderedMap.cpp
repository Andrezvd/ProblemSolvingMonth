// UnOrderedMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <unordered_map>
#include <iostream>

int lonelyinteger(const std::vector<int>& v) {

    std::unordered_map<int, int> countMap;

    // Contar la frecuencia de cada n�mero en el vector
    for (int num : v) {
        countMap[num]++;
    }

    // Encontrar el n�mero que no se repite
    for (const auto& pair : countMap) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    // Si no se encuentra ning�n n�mero no repetido, puedes retornar un valor por defecto o lanzar una excepci�n
    throw std::runtime_error("No se encontr� ning�n n�mero no repetido.");
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
