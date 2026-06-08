// WAP to reverse a number ?

#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n))
        return 0;

    long long num = n;
    bool negative = num < 0;
    if (negative)
        num = -num;

    long long reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    if (negative)
        reversed = -reversed;

    cout << reversed;
    return 0;
}
