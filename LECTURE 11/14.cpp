// merge two sorted arrays with conditions
#include <iostream>
using namespace std;

void printArray(int a[], int n) {
    int i=0;
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
	
}

void mergeSortedArrays(int a[], int m,int b[], int n) {
	int i = m - 1, j = n - 1,
	    k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (b[j] > a[i]) {//jo bada hai usse last me rakh do
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k--] = a[i--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

int main() {
// arrays are always passed by refrence so main fn waala array will change

	int a[5] = {3, 5};// yaha pe size mention karna is necessary
	int m = 2;//manually dena padega 

	int b[] = {1, 2, 6};
   // int b[3] = {1, 2, 6};
	int n = sizeof(b) / sizeof(int);

	mergeSortedArrays(a, m, b, n);
	printArray(a, m + n);


	return 0;
}















