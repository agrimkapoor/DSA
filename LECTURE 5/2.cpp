/*
	Write a program to print the following pattern
	1
	2 3
	4 5 6
	7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
	int n, i, no;//SAARE VARIABLES UPAR HI DECLARE KARLIYA KARO 
	cin >> n;

	no = 1;

	int row = 1;
	while (row <= n) {

		// 1. We have to row times work
		i = 1;
		while (i <= row) {
			cout << no << " ";// cout<<no ;  this not works
			no = no + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}