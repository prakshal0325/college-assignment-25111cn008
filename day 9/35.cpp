/*Write a program to Print repeated character pattern.
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>
using namespace std ;
int main (){
  int n, i, j;

    cout << "Entre n = ";
    cin >> n ;

      for(i = 0; i <= n; i++) {
        for(j = 1 ; j <= i; j++) {
            cout << char('A' + i-1);
        }
        cout << endl;
    }

    return 0;
}  