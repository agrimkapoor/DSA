//PRINTING ALL THE 32 BITS OF INT
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 31; i >= 0; --i)
	{
		// int val = (1 << i);
		if (( n & (1 << i)) == 0) {
			cout << 0;
		}
		else {
			cout << 1;
		}
	}
	cout << endl;

	return 0;
}