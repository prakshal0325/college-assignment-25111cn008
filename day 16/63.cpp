// Write a program to Find pair with given sum.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;
    bool found = false;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found.";
    }

    return 0;
}