#include <iostream>
using namespace std;

int x = 10000;

int main() {

	int x = 0, y = 10;

	if (++x && ++x) {
		int x = 20;
		++x;
		++y;
		cout << ::x << endl;
		::x += 100;
	}
	else {
		int y = 200;
		y++;
	}

	cout << ::x << endl;
	cout << y << endl;

	return 0;
}