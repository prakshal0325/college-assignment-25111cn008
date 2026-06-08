// WAP to find nth fibonacci term ?

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 1) {
        cout << "Nth Fibonacci term = " << a;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Nth Fibonacci term = " << a;

    return 0;
}