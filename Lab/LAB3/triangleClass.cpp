#include <iostream>
#include <cmath>
using namespace std;

class triangle {
	double x1, y1, x2, y2, x3, y3, d1, d2, d3;
	public:
		void assign();
		int checkValidity();
		void computeSide();
		double shortestSide(); // inline keyword isn't compulsory in the prototype definition.
};

void triangle::assign() {
	cout << "Enter the coordinates : ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates : ";
	cin >> x2 >> y2;
	cout << "Enter the coordinates : ";
	cin >> x3 >> y3;
}

int triangle::checkValidity() {
	if (d1 + d2 <= d3) return 0;
	else if (d2 + d3 <= d1) return 0;
	else if (d1 + d3 <= d2) return 0;
	else return 1;
}

void triangle::computeSide() {
	cout << "The side lengths are : ";
	cout << (d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) << " ";
	cout << (d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2))) << " ";
	cout << (d3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2))) << " " << endl;
}

inline double triangle::shortestSide() {
	return d1 < d2 ? (d3 < d1 ? d3 : d1) : (d3 < d2 ? d3 : d2); // :) if-else ezhuthan vayya. 
}

int main() {
	triangle t;
	t.assign();
	t.computeSide();
	if (t.checkValidity()) cout << "The triangle is valid.\n";
	else {
		cout << "The triangle is invalid.\n";
		return 0;
	}
	cout << "The shortest side is : " << t.shortestSide() << endl;
	return 0;
}
