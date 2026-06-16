// Write a program to Count even and odd elements.?

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int evenCount = 0, oddCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of Even elements = " << evenCount << endl;
    cout << "Number of Odd elements = " << oddCount << endl;

    return 0;
}