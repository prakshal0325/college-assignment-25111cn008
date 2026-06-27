// Write a program to Find diagonal sum.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int A[100][100];
    int sum = 0;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Find sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    cout << "Sum of the main diagonal elements = " << sum << endl;

    return 0;
}