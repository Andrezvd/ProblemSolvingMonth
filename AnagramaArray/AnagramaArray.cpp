// AnagramaArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector> 

using namespace std;    

int anagram(string s) {
    int len = s.length();

    // Si la longitud de la cadena es impar, no se puede formar un anagrama
    if (len % 2 != 0) {
        return -1;
    }

    // Dividir la cadena en dos partes

    string s1 = s.substr(0, len / 2);
    string s2 = s.substr(len / 2);

    // Contar la frecuencia de cada carácter en ambas partes

    vector<int> count(26, 0);

    for (char c : s1) {
        count[c - 'a']++;
    }

    // Calcular la diferencia de frecuencias en la segunda mitad de la cadena
    int changes = 0;

    for (char c : s2) {
        if (count[c - 'a'] > 0) {
            count[c - 'a']--;
        }
        else {
            changes++;
        }
    }

    return changes;
}

int main()
{
    std::cout << "Hello World!\n";
}

