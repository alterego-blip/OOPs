#include <iostream>
using namespace std;

class mode {
	int array[50], n;
	public:
		mode() {
			int i;
			cout << "Enter the number of elements : ";
			cin >> n;
			cout << "Enter the elements: ";
			for (i = 0; i < n; i++) cin >> array[i];
		}

		mode (mode & obj) {
			int i;
			n = obj.n;
			for (i = 0; i < n; i++) {
				array[i] = obj.array[i];
			}
		}

		void findMode() {
			int i, j, counter, mode, max, dupe;
			max = 0;
			for (i = 0; i < n; i++) {
				counter = 1;
				for (j = i + 1; j < n; j++) {
					if (array[i] == array[j]) {
						counter++;
						array[j] = EOF;
					}
				}
				if (counter > max) {
					max = counter;
					mode = array[i];
					dupe = 0;
				} else if (counter == max && mode != array[i]) dupe = 1;
			}
			if (!dupe) cout << "The mode was found out to be : " << mode << endl;
			else cout << "The mode does not exist.\n";
		}
};

int main() {
	mode m1;
	mode m2(m1);
	m2.findMode();
	return 0;
}
				

