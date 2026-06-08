// WAP to find the sum of digits of a number ?

#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n))
        return 0;

    long long num = n;
    if (num < 0)
        num = -num;

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum;
    return 0;
}
