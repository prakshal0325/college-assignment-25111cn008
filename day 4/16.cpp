// WAP to print armstrong number in a range ?

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 0, temp, digits = 0, start , end ;
    int sum = 0;

    cout << "Enter a start number: ";
    cin >> start;
    cout << "Enter a end number: ";
    cin >> end ;

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        if (temp == 0) 
        digits = 1; 

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}