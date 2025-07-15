// cel to far waala code
#include <iostream>
using namespace std;

void printTable(int init, int fval, int step) {
	int far = init; // Initialise
	while (far <= fval) {
		int cel = (5 / 9.0) * (far - 32);

		cout << far << " " << cel << endl;

		far = far + step;
	}
}

int main() {

	int initVal = 0, fval = 300, step = 20;
	// printTable(initVal, fval, step);
	printTable(0, 300, 20);
	printTable(10, 1300, 200);

	return 0;
}