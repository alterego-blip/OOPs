#include <iostream>
using namespace std;

class time { 
	public:
	int h, m, s;
	void assign() {
		cout << "Enter time in the format hh mm ss : ";
		cin >> h >> m >> s;
	}
	void display() {
		cout << h << ":" << m << ":" << s << endl;
	}
};

void swap(class time & t1, class time & t2) {
	int temp;
	temp = t1.s;
	t1.s = t2.s;
	t2.s = temp;
}

int main() {
	class time t1, t2;
	class time & T1 = t1, & T2 = t2;
	cout << "TIME1" << endl;
	t1.assign();
	cout << "TIME2" << endl;
	t2.assign();
	cout << "After swapping." << endl;
	swap(T1, T2);
	cout << "TIME1" << endl;
	t1.display();
	cout << "TIME2" << endl;
	t2.display();
	return 0;
}



