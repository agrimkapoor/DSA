#include <iostream>
using namespace std;

int main() {
	int x = 10;
	char ch = 'A';

	char ch1 = 'B';
	cout << "ch  : " << ch << endl;
    cout << "&ch : " << &ch << endl;//THIS WILL NOT PRINT THE ADDRESS BUT PRINT A AND SOME G.V UNTIL NULL CARAC NHI MIL JAATA
	cout << "&ch : " << (void*)&ch << endl;

	cout << "ch1  : " << ch1 << endl;
	cout << "&ch1: " << &ch1 << endl;
	cout << "&ch1 : " << (int*)&ch1 << endl;

	return 0;
	//OUTPUT:
	// 	ch  : A
	// 	&ch : A

	// 	&ch : 0x61ff0b
	// 	ch1  : B
	// 	&ch1: BA

// &ch1 : 0x61ff0a

//THERE IS A EXTRA LINE BECAUSE AFTER PRINTING A THERE WAS '\n' and then null charac
}