#include <iostream>
using namespace std;

class triangle {
	double x1, y1, x2, y2, x3, y3, d1, d2, d3;
	public:
		void assign();
		int checkValidity();
		void computeSide();
		double shortestSide(); // inline keyword isn't compulsory in the prototype definition.
};

void triangle::assing() {
	cout << "Enter the coordinates : ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates : ";
	cin >> x2 >> y2;
	cout << "Enter the coordinates : ";
	cin >> x3 >> y3;
}

int triangle::checkValidity() {
	if (d1 + d2 < d3) return 0;
	else if (d2 + d3 < d1) return 0;
	else if (d1 + d3 < d2) return 0;
	else return 1;
}
