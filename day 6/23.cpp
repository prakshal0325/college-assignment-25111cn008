// WAP to count set of bits in a number ?

#include<iostream>
using namespace std ;
int main (){
    int n ;

    cout << "Entre number = ";
    cin >> n ;

    int count = 0 ;
    while (n > 0){
        if (n % 2 == 1){
            count ++ ;
        }
        n /= 2 ;
    }
    cout << count ; 
    return 0 ;
}