// Write a program to calculate the sum of first N natural numbers.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}
