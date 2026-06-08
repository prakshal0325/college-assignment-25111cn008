// WAP to find the product of digit ?

#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n))
        return 0;

    long long num = n;
    if (num < 0)
        num = -num;

    int pro = 1;
    if (num == 0)
        pro = 0;

    while (num > 0) {
        pro *= num % 10;
        num /= 10;
    }

    cout << pro;
    return 0;
}