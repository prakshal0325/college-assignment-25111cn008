// WAP to write function for palindrome ?

#include<iostream>
using namespace std ;
bool isPalindrome(int n){
    if (n < 0) return false;
    
    long long original = n;
    long long reversed = 0;
    long long temp = n;

    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    if (!(cin >> num)) return 0;

    if (isPalindrome(num)) {
        cout << "number is palindrome";
    } else {
        cout << "number is not palindrome";
    }

    return 0;
}