//wave print
#include <iostream>
using namespace std;

int main() {
	int a[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{17, 18, 19},
	};

	int rows = sizeof(a) / sizeof(a[0]);
	int cols = sizeof(a[0]) / sizeof(int);

	for (int j = 0; j < cols; ++j)
	{
		if (j % 2) { 
			for (int i = rows - 1; i >= 0; --i)
			{
				cout << a[i][j] << " ";
			}
		}
		else {
			for (int i = 0; i < rows; ++i)
			{
				cout << a[i][j] << " ";
			}
		}
	}

	return 0;
}