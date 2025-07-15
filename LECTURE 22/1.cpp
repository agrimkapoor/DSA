#include <iostream>
using namespace std;

int main() {

	int *a = new int;
	float *f = new float;

	*a = 10;
	*f = 12.11;
	cout << *a << endl;
	cout << *f << endl;

	// DELETING BUCKETS
	delete a;
	a = NULL;



	return 0;
}