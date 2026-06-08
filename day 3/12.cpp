// WAP to find the LCM of two numbers ?

#include<bits/stdc++.h>
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



    int gcd = x;

    int lcm = (a*b)/gcd ;

    cout<< "LCM(" << a << " , " << b << " ) = " << lcm << endl;
    return 0;
}
