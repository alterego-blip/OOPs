#include <iostream>
using namespace std;

class average{
	static int array[50], multiplier;
	public:
	static void assign(int);
	static double avg(int);
	static void setMul();
	static void sortArray(int);
	static void display(int);
};

int average::array[50], average::multiplier = 1;

void average::assign(int n) {
	int i;
	cout << "Enter the elements of the array : ";
	for (i = 0; i < n; i++) cin >> array[i];
}

double average::avg(int n) {
	int i, sum = 0;
	for (i = 0; i < n ; i++) sum += array[i]; 
	return sum * 1.0 * multiplier / n; // implicit type conversion to prevent truncation.
}

void average::setMul() {
	cout << "Enter the multiplier : ";
	cin >> multiplier;
}

void average::sortArray(int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void average::display(int n) {
	int i;
	for (i = 0; i < n; i++) cout << multiplier * array[i] << " ";
	cout << endl;
}

int main() {
	average o1, o2, o3;
	int n;
	cout << "Enter the number of elements in the array : ";
	cin >> n;
	o1.assign(n);
	cout << "The average is : " << o1.avg(n) << endl;
	o2.setMul();
	o2.display(n);
	cout << "The new average is : " << o1.avg(n) << endl;
	o3.sortArray(n);
	cout << "The sorted array is : ";
	o3.display(n);
	return 0;
}
