// staircase search
//  ek hi occurence of key ke liye hai code
//for multiple occurence of key ke liye code nhi chalega
#include <iostream>
using namespace std;

void staircase(int a[][4],int m,int n,int key){
    int i=0;
    int j=n-1;

    while(i<m && j>=0){
        if(a[i][j]==key){
            cout<<"key found at "<<i<<" "<<j<<endl;
            return;//void me bas return likh sakte hai to end the void fn
        }
        else if(key>a[i][j]){
            //go down;
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"key not found";
}
void stairCase1(int a[][4], int n, int m, int key) {
	int i = 0, j = m - 1;
	bool isKeyFound = false;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key found at " << i << ", " << j << endl;
			isKeyFound = true;
			break;
		}
		else if (key > a[i][j]) {
			i++;
		}
		else j--;
	}
	if (isKeyFound == false) {
		cout << "Key Not found\n";
	}
}
int main() {
    int a[][4]={// yaha pe dimensions(row &col size) jo hai woh hi arg me hoga
        {1,2,3,4},
        {2,4,5,10},
        {6,7,9,12},
        {7,8,15,19}
    };

    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(a[0])/sizeof(int);
    staircase(a,m,n,8);


    return 0;
}