// WAP to write function to find sum of two number ?

#include<iostream>
using namespace std ;
int sumoftwonumber(int a, int b){

    int result = 0 ;

    result = a + b ;

    return result ;
}

int main (){

    int x , y ;

    cout << "Entre v = ";
    cin >> x;
    cout << "Entre y = ";
    cin >> y ;

    cout << "x + y = " << sumoftwonumber(x,y);
    return 0 ; 
}