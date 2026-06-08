// WAP check weather the number is palindrome ?
#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n))
        return 0;

    long long original = n;
    if (n < 0) {
        cout << "number is not palindrome";
        return 0;
    }

    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (original == reversed)
        cout << "number is palindrome";
    else
        cout << "number is not palindrome";

    return 0;
}