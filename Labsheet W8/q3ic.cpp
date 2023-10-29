#include <iostream>
using namespace std;

void printMatrix(int A[][5], int rows) {
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < 5; i++) {
            cout << A[j][i] << " | ";
        }
        cout << endl;
    }
}

void inputMatrix(int A[][5], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 5; i++) {
            cout << "Enter element " << i + 1 << " in row " << j + 1 << ": ";
            cin >> A[j][i];
        }
    }
}

void sumMatrix(int A[][5], int n) {}

int main() {
    int n;
    cout << "Enter the number of rows n for the matrix: ";
    cin >> n;

    int M1[n][5];
    int M2[n][5];
    int RM[n][5]

    inputMatrix(M1 n);

    cout << "Entered matrix 1:" << endl;

    inputMatrix(M2,n);

    cout << "Entered matrix 2:" << endl;


    printMatrix(M, n);

    return 0;
}

