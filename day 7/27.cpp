// WAP to recursive sum of digits ?

#include <iostream>
using namespace std ;

int sumdigit(int n ){
    if (n == 0){
        return 0 ;
    }else{
        return (n % 10) + sumdigit(n / 10);
    }
}

int main (){
    int n ;

    cout << "Entre number = ";
    cin >> n ;

    cout << "Sum of digit = "<< sumdigit(n);

    return 0 ;
}