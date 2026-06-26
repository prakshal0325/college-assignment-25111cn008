// Write a program to Find missing number in array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6; // Numbers should be from 1 to 6

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing Number = " << missing;

    return 0;
}