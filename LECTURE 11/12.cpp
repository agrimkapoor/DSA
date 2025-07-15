//CALL BY REFERENCE
#include <iostream>
using namespace std;

void update(int &x) {
	x = x + 1;
	cout << "Inside update: " << x << endl;
}

int main() {

	int a = 1;
	cout << "Initial a : " << a << endl;

	// a = a + 1;
	update(a);

	cout << "Updated a : " << a << endl;

	return 0;
}