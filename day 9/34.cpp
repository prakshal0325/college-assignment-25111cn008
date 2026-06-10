/*Write a program to Print reverse number triangle.
12345
1234
123
12
1
*/

#include<iostream>
using namespace std ;
int main (){
    int n, i, j;

    cout << "Entre n = ";
    cin >> n ;

      for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}