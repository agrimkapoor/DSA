//INITIALISATION OF ARRAY
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	int b[100]={1,2,3,4,5};
	for(int i=0;i<100;i++){
		cout<<b[i]<<" ";//  o/p is  1 2 3 4 5 0 0 and so on
	}
	return 0;
}