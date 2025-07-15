//PRINT SUBSEQUENCES OF STRINGS(ITERATIVE APPROACH)
//abc ke 8 subseq hai (including empty)empty waale subseq ke liye khaali line aayegi
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	
	char a[10000];
	cin >> a;
	int n = strlen(a);
	for (int i = 0; i <= ((1 << n) - 1); ++i)
	{	int no=i;
		for (int j = 0; j < n; ++j)
		{
			if (no & 1) {
				cout << a[j];
			}
			no=no>>1;
			
		}

		cout << endl;
	}
	//m2 CONFUSING WAY
	// for (int i = 0; i <= ((1 << n) - 1); ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if (i & (1 << j)) {
	// 			cout << a[j];
	// 		}
	// 	}

	// 	cout << endl;
	// }

	return 0;
}
