//INPUT CHARACTER ARRAY(STRING) BY USING CIN.GET
#include <iostream>
using namespace std;

void inputString(char*a, int s, char delimiter = '\n') {
    // s is the size of the array
	int i = 0;
	char ch;

	ch = cin.get(); // Initialisation
	while (ch != delimiter and i < s - 1) {//max no of characters=499(as one will be null charac) toh index is till 498
		a[i++] = ch;

		ch = cin.get();
	}

	a[i] = '\0';//append this
}

int main() {

	char a[500];

	// Input lelo till '\$'
	inputString(a, 500, '$');

	cout << a << endl;
	return 0;
}