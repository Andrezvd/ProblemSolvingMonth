// CounterGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

string counterGame(long n) {
    bool ispower;
    int counterTurn = 0;

    while (n != 1) {
        double logarithm = log(n) / log(2);
        ispower = floor(logarithm) == logarithm;

        if (ispower) {
            n = n / 2;
        }
        else {
            long pow = 1;
            while (pow < n) {
                pow *= 2;
            }
            n = n - pow / 2;
        }

        counterTurn++;
    }

    return (counterTurn % 2 == 0) ? "Richard" : "Louise";

}

std::string counterGameSolutionBit(long n) {
    int counterTurn = 0;

    // Encuentra el bit más significativo de n
    long msb = 1;
    while (msb <= n) {
        msb <<= 1;
    }
    msb >>= 1;

    while (n != 1) {
        if (n == msb) {
            n >>= 1; // Si n es una potencia de 2, simplemente se divide por 2
        }
        else {
            n -= msb; // Resta el bit más significativo de n
        }

        counterTurn++;

        // Actualiza el bit más significativo de n para el siguiente turno
        msb >>= 1;
    }

    return (counterTurn % 2 == 0) ? "Richard" : "Louise";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long n;
        std::cin >> n;

        std::string winner = counterGame(n);
        std::cout << winner << std::endl;
    }

    return 0;
}