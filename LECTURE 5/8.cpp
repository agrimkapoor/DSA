//CELSIUS AND FARANITE
#include <iostream>
using namespace std;

int main() {

	int init, fval, step, cel;
	cin >> init >> fval >> step;

	int far = init; // Initialise
	while (far <= fval) {
		cel = (5 / 9.0) * (far - 32);
        // 5/9 will not work as int/int
        //waise cel is int
         

		cout << far << " " << cel << endl;


		far = far + step;
	}

	return 0;
}