// Write a program to count digits in a number.

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cout << "Enter number = ";
    cin >> n;

    if (n == 0) {
        cout << "Number of digits = 1" << endl;
        return 0;
    }

    int count = 0;
    long long temp = llabs(n);
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    cout << "Number of digits = " << count << endl;
    return 0;
}