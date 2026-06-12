// write function to find factorial ?

#include<iostream>
using namespace std ;

long long fact(int a){
unsigned long long factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }
    return factorial ;
}
int main (){
    int n ;

    cout << "Entre n = ";
    cin >> n ;

    cout << "factorial of " << n << " = " << fact(n); 
}