//COUNT ALL CHARACTERS
#include <iostream>
using namespace std;

int main() {
	int alphabets = 0, whitespaces = 0, special = 0, digits = 0;

	char ch;
	ch = cin.get(); // This will not ignore whitespace characters.

	while (ch != '$') {
		// Logic to count alphabets.... goes here
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90  bhi likh sakte hai
			alphabets++;
		}
		else if (ch >= '0' and ch <= '9') {
            // (ch >= 48 and ch <= 57)
			digits++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			whitespaces++;
            // tab is also considered as single character
		}
		else {
			special++;
		}

		ch = cin.get();
	}


	cout << "Characters    : " << alphabets<< endl;
	cout << "Digits        : " << digits << endl;
	cout << "White Spaces  : " << whitespaces << endl;
	cout << "Special       : " << special << endl;




	return 0;
}















