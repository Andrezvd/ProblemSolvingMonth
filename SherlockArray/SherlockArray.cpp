// SherlockArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

string findEquilibrium(vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;

    // Calcula la suma total de los elementos del arreglo
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;

    // Verifica si existe un punto de equilibrio en el arreglo
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];  // Resta el elemento actual de la suma total

        if (leftSum == totalSum) {
            return "YES";  // Se encontró un punto de equilibrio
        }

        leftSum += arr[i];  // Agrega el elemento actual a la suma de la izquierda
    }

    return "NO";  // No se encontró ningún punto de equilibrio
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = findEquilibrium(arr);
        cout << result << endl;
    }

    return 0;
}
