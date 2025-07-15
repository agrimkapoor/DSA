//LARGEST LENGTH STRING OUT OF N STRINGS
#include <iostream>
#include <cstring> //strcpy(a,b) // b string ki value comes in string
using namespace std;

void copyString(char*a, char*b) {
	int lenb = strlen(b);
	for (int i = 0; i <= lenb; ++i) a[i] = b[i];
}


void largestOfNStrings() {
	// To store the largest string
	char largest[100000];
	int largest_len = 0;
	// Take input of n strings and print them
	char a[100];
	int n;
	// Take input of n, this represents number of strings user will ip
	cin >> n;
	// cin.ignore();
	cin.get();

	// Loop mei n strings ko input karlo....
	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		// if current string sabse badi hai, toh we can store it
		int lena = strlen(a);
		if (lena > largest_len) {
			// largest ke andar a ko copy krdo
			copyString(largest, a); // do array ko equate nhi kar sakta
			// largest_len ko update kardo
			largest_len = lena;
		}
	}

	// Print the largest string
	cout << "Largest String: " << largest << endl;
	cout << "Length: " << largest_len << endl;
}


int main() {

	largestOfNStrings();



	return 0;
}