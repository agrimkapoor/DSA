//SMA SE ARRAY RETURN : GALAT ANS AAYEGA
#include <iostream>
using namespace std;

int* fun() {
	int a[100];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i * 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return a;
}

int main() {

	int *arr = fun();
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}