// Program to find the sum of the primary and secondary diagonals
#include <iostream>
using namespace std;

int main() {
    int sumPrimary, sumSecondary, r, i, j;
    sumPrimary = sumSecondary = 0;
    // Only square matrix has a diagonal;
    cout << "Enter the number of rows in the matrix : ";
    cin >> r;

    int matrix[r][r];
    for (i = 0; i < r; i++) {
        cout << "Enter a row : ";
        for (j = 0; j < r; j++) cin >> matrix[i][j];
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (i == j) sumPrimary += matrix[i][i];
            if (i + j == r - 1) sumSecondary += matrix[i][j];
        }
    }

    cout << "The sum of primary diagonal is : " << sumPrimary << "\n";
    cout << "The sum of secondary diagonal is : " << sumSecondary << "\n";
    return 0;
}