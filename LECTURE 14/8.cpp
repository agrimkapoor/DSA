//spiral print
#include <iostream>
using namespace std;

void spiralPrint(int a[][4], int rows, int cols) {
    int sr = 0, er = rows - 1, sc = 0, ec = cols - 1;

    while (sr <= er && sc <= ec) {
        // 1. Print top row
        for (int j = sc; j <= ec; ++j) {
            cout << a[sr][j] << " ";
        }
        sr++;

        // 2. Print right column
        for (int i = sr; i <= er; ++i) {
            cout << a[i][ec] << " ";
        }
        ec--;

        // 3. Print bottom row 
        if (sr <= er) {//sr++ kiya tha so it must still satisfy condition
            for (int j = ec; j >= sc; --j) {
                cout << a[er][j] << " ";
            }
            er--;
        }

        // 4. Print left column 
        if (sc <= ec) {//ec-- kiya tha so it must still satisfy condition
            for (int i = er; i >= sr; --i) {
                cout << a[i][sc] << " ";
            }
            sc++;
        }
    }
}


int main() {

	int a[4][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 55},
		{7, 8, 9, 555},
		{17, 18, 19, 5555},
	};

	spiralPrint(a, 4, 4);
   
	return 0;
}