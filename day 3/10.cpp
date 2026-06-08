// WAP to print prime number in a range ?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of the range: ";
    cin >> start;
    cout << "Enter end of the range: ";
    cin >> end;

    if (start > end) {
        swap(start, end);
    }

    cout << "Prime numbers in the range " << start << " to " << end << ":\n";
    bool found = false;
    if (start < 2) {
        start = 2;
    }

    for (int n = start; n <= end; n++) {
        bool isprime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            cout << n << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No prime numbers found in this range.";
    }
    cout << endl;
    return 0;
}
