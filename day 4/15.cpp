// WAP to check the Armstrong number ?

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digits = 0;
    double sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong Number";
    else
        cout << n << " is not an Armstrong Number";

    return 0;
}