// WAP ot recursive factorial ?

#include<iostream>
using namespace std ;
long long fact (int n){
    if (n <=1){
        return 1 ;
    }else{
        return n * fact ( n - 1 );
    }
}
int main (){
    int n  ;
     cout << "Entre number = ";
     cin >> n ;
    
    cout << fact(n) ;
    return 0 ;
}