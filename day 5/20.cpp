// WAP to find largest prime factor ?

#include<iostream>
using namespace std ;
int main (){

    int n, largestfactor = 0 ;

  cout << "Entre number = ";
  cin >> n ;

  for (int i = 2; i*i <= n; i++){
    while (n % i == 0){
        largestfactor = i;
        n /= i ;
    }
  }

  if ( n > 1 ){
    largestfactor = n ;
  }

    cout << "Largest factor = "<< n ;
  
return 0 ;

  }
