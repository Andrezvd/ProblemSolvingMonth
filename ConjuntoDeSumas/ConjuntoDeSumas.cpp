// ConjuntoDeSumas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int birthday(vector<int>& s, int d, int m) {
    int count = 0;

    for (int i = 0; i <= s.size() - m; i++) {
        int sum = 0;

        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }

        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int d, m;
    cin >> d >> m;

    int result = birthday(s, d, m);
    cout << result << endl;

    return 0;
}