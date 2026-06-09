// WAP to check the strong number ?

#include<iostream>
using namespace std ;
int main (){
    int n, temp, digit, sum = 0 ;

    cout << "Entre number = ";
    cin >> n ;
    
    temp = n ;

    while (temp != 0){
    digit = temp % 10 ;
    
    int fact = 1 ;

    for (int i = 1; i <= digit; i++ ){
        fact *= i;
    }

    sum += fact ;
    temp /= 10 ;
    }

    if (sum == n){
        cout<< "Strong number";
    }else{
        cout<< "Not strong number";
    }
    return 0 ;
}