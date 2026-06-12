// WAP to write function to find maximum ?

#include<iostream>
using namespace std ;
int maximum(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int main (){

    int x , y ;

    cout << "Entre v = ";
    cin >> x;
    cout << "Entre y = ";
    cin >> y ;

    cout << "maximum in x, y = " << maximum(x,y);
    return 0 ; 
}
