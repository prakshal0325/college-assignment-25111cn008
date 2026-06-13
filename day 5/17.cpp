// WAP to check perfect number ?

#include <iostream>
using namespace std;
int main (){

    int n ;

    cout << "Entre number = ";
    cin >> n ;

    ;

  int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n)
        cout << n << " " << "Perfect number ";
    else 
        cout << n << " " <<  "NOt perfect number";
          
        return 0 ;
}