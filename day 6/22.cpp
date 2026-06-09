// WAP to convert binary to decimal ;

#include<iostream>
#include<math.h>
using namespace std ;
int main (){
    int n ;

    cout << "Entre binary number = ";
    cin >> n ;

   int decimal = 0, power = 0;
   int binary = n ;

   while ( binary != 0){
    int digit = binary % 10 ;
    decimal += (digit * pow(2,power));
    power ++ ;
    binary /= 10 ;  
   }
   cout << decimal ;

   return 0 ;
}