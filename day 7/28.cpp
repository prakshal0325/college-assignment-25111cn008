// WAP to recursive reverse number ?

#include <iostream>
using namespace std ;

int reversenum( int n , int rev = 0){
    if  (n == 0){
        return rev;
    }else{
        return reversenum (n / 10 , rev*10 + n % 10);
    }
}

int main (){
    int n ; 

    cout << "Entre number = ";
    cin >> n ;

    cout << "reverse number = " << reversenum(n);

    return 0 ;
}