// Write a program to find factorial of a number.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number = ";
    cin >> n;

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}