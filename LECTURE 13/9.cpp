//APPEND 2 STRINGS
#include <iostream>
#include <cstring> // Header file to use strlen, strcat
using namespace std;

void appendStrings(char*a, char*b) {
	int lena = strlen(a); // Inbuilt function to provide length
	int lenb = strlen(b); // Inbuilt function to provide length

	int i = lena, j = 0;
	while (j <= lenb) {//TO APPEND '\0' ALSO
		a[i++] = b[j++];
	}
}

int main() {

	char a[1000] = "Hey";
	char b[1000] = "There";

	// appendStrings(a, b);
	strcat(a, b);
	cout << a << endl;

	return 0;
}