// WAP to find GCD of two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int x = abs(a);
    int y = abs(b);

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "GCD(" << a << ", " << b << ") = " << x << endl;
    return 0;
}