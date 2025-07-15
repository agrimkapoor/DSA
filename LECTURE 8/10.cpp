#include <iostream>
using namespace std;

int x = 10000;

int main() {

	int x = 1, y = 10;

	if (x++ && ++x) { //1 && 3 x++ mei 1 will go before and x will become 2 then go to ++x
        cout<<x<<endl;
		int x = 20;
		++x;
		++y;
		cout << ::x << endl;
		::x += 100;
	}
    
	else {
		int y = 200;
		y++;
	}

	cout << ::x << endl;
	cout << y << endl;

	return 0;
}