//HOLLOW DIAMOND (n is odd)
#include <iostream>
using namespace std;

int main() {

	int n, star, space;
	cin >> n;

	int row = 1;
	while (row <= n / 2 + 1) {
		if (row == 1) {
			// print n '*'
			star = 1;
			while (star <= n) {
				cout << '*' << '\t';
				star = star + 1;
			}
		}
		else {
			int space_count = 2 * (row - 1) - 1;
			int star_count = (n - space_count) / 2;
			// Print '*'
			star = 1;
			while (star <= star_count) {
				cout << '*' << '\t';
				star = star + 1;
			}
			// Print spaces
			space = 1;
			while (space <= space_count) {
				cout << '\t';
				space = space + 1;
			}
			// Print '*'
			star = 1;
			while (star <= star_count) {
				cout << '*' << '\t';
				star = star + 1;
			}
		}

		cout << '\n';
		row = row + 1;
	}

	// Pattern Mirroring
	row = n / 2 + 1 - 1;
	while (row >= 1) {

		if (row == 1) {
			// print n '*'
			star = 1;
			while (star <= n) {
				cout << '*' << '\t';
				star = star + 1;
			}
		}
		else {
			int space_count = 2 * (row - 1) - 1;
			int star_count = (n - space_count) / 2;
			// Print '*'
			star = 1;
			while (star <= star_count) {
				cout << '*' << '\t';
				star = star + 1;
			}
			// Print spaces
			space = 1;
			while (space <= space_count) {
				cout << '\t';
				space = space + 1;
			}
			// Print '*'
			star = 1;
			while (star <= star_count) {
				cout << '*' << '\t';
				star = star + 1;
			}
		}

		cout << '\n';

		row = row - 1;
	}

	return 0;
}