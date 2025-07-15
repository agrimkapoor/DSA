//BINARY SEARCH
#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int m = ((s + e) >> 1);
		if (a[m] == key) return m;
		else if (key < a[m]) e = m - 1;
		else s = m + 1;
	}

	// s > e, hence key not found
	return -1;
}


int main() {

	int a[100000];
	int n, key;
	cout << "Enter N: ";
	cin >> n;
	cout << "Enter N elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "Enter Key: ";

	cin >> key;


	cout << binarySearch(a, n, key) << endl;

	return 0;
}