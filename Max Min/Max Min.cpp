// Max Min.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int minUnfairness = arr[k - 1] - arr[0];

    for (int i = 1; i <= arr.size() - k; i++) {
        int currentUnfairness = arr[i + k - 1] - arr[i];
        if (currentUnfairness < minUnfairness) {
            minUnfairness = currentUnfairness;
        }
    }

    return minUnfairness;
}

int maxMin1(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    vector<int> v(k);
    int diferencia = 0;
    for (int i = 0; i < k; i++) {
        v[i] = arr[i];
    }
    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());
    return *max - *min;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxMin(k, arr);
    cout << result << endl;

    return 0;
}