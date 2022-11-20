#include <iostream>
using namespace std;

int main() {
    int n, i, j, min, index, temp;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int array[n];

    cout << "Enter the elements : ";
    for (i = 0; i < n; i++) cin >> array[i];

    // Selection sort
    for (i = 0; i < 3; i++) {
        min = array[i];
        index = i;

        for (j = i; j < n; j++) {
            if (array[j] < min) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[index] = temp;
        cout << min << " ";
    }
    cout << "\n";
    return 0;
}