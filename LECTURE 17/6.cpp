//TARGET SUM
#include <iostream>
using namespace std;

int main() {

	int n, target, counter = 0;
	cin >> n >> target;
	int a[10000];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i <= ((1 << n) - 1); ++i)
	{
		// cout << i << " : ";
		int sum = 0;
		// Print binary of i
		// we have to find n bits
		for (int j = 0; j < n; ++j)
		{
			if (i & (1 << j)) {//agar bit 1 hai
				// cout << 1;
				// cout << a[j] << " ";
				sum += a[j];
			}
			else {//agar bit 0 hai
				// cout << 0;
				// cout << -a[j] << " ";
				sum += (-a[j]);
			}
		}
		if (sum == target) {
			counter++;
		}
		// cout << endl;

	}
	cout << counter << endl;

	return 0;
}