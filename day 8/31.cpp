/* 
Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/ 

#include<iostream>
using namespace std ;
int main (){
  int n, i, j;

    cout << "Entre n = ";
    cin >> n ;

      for(i = 1; i <= n; i++) {
        for(j = 0 ; j < i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}  
