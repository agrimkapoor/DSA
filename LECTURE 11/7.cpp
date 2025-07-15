//FORWARD DECLARATION
#include <iostream>
using namespace std;

// int sum(int a, int b);// Forward declaration
int sum(int, int);// Forward declaration

int main() {

	int a = 20, b = 20;

	int ans = sum(a, b);
	cout << "Sum is : " << ans << endl;
	if (ans % 2 == 0) {
		cout << "Sum is even\n";
	}
	else {
		cout << "Sum is odd\n";
	}


	return 0;
}

int sum(int a, int b) {
	int ans = a + b;

	return ans;
}