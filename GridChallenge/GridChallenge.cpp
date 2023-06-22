// GridChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::string gridChallenge(std::vector<std::string>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    // Ordenar cada fila de la matriz de forma individual
    for (int i = 0; i < n; i++) {
        sort(grid[i].begin(), grid[i].end());
    }

    // Verificar el orden global de las filas
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (grid[i][j] > grid[i + 1][j]) {
                return "NO"; // Si hay un elemento fuera de orden, retorna "NO"
            }
        }
    }

    return "YES"; // Si todas las filas están en orden ascendente, retorna "YES"
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<std::string> grid(n);
        for (int i = 0; i < n; i++) {
            std::cin >> grid[i];
        }

       std::cout << gridChallenge(grid) << std::endl;
    }

    return 0;
}