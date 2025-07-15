//SUBSTRINGS

#include <iostream>
using namespace std;

int main() {
	int i, j, k;
	char a[] = "abcd";

	for ( i = 0; a[i]; ++i)
	{
		for ( j = i; a[j]; ++j)
		{
			for ( k = i; k <= j; ++k)
			{
				cout << a[k];
			}
			cout << endl;
		}
	}

	return 0;
}