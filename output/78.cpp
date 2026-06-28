// Write a program to Check symmetric matrix.\

#include <iostream>
using namespace std;

int main() {
    int n;
    int A[10][10];
    bool symmetric = true;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        cout << "The matrix is Symmetric.";
    else
        cout << "The matrix is Not Symmetric.";

    return 0;
}