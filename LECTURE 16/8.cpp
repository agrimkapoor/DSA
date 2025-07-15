//indices
#include <iostream>
using namespace std;
// check 7
bool check(int*a,int n){
    // base case
	if (n == 0) return false;

	// recursive case
	if (a[0] == 7) {
		return true;
	}
	return check(a + 1, n - 1);
	 
}
// find first index of 7
int firstindex(int*a,int n,int i){
    //1.base case
    if(i==n)return -1;
    //2.recursive case
    if(a[i]==7)return i;
    return firstindex(a,n,i+1);

}
int first_7(int *a, int n) {
	if (n == 0) {
		return -1;
	}

	// recursive case
	if (a[0] == 7) {
		return 0;
	}
	int indx = first_7(a + 1, n - 1);
	if (indx == -1) {
		return -1;
	}

	return indx + 1;
}
// find last index of 7
int lastindex(int*a,int n,int i){
    //1.base case
    if(i==-1)return -1;
    //2.recursive case
    if(a[i]==7)return i;
    return lastindex(a,n,i-1);

}
int lastIndex(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		// agar i par 7 hai, store karlo
		int indx = i;
		// aage ke remaining array mei recursion ko bolo kya 7 hai?

		int aageIndex = lastIndex(a, n, i + 1);
		// if aage 7 nahi milla toh means, indx is our last index of 7
		if (aageIndex == -1) {
			return indx;
		}
		// agar aage se aa gaya answer, that means whi hoga last indx of 7
		return aageIndex;
	}
	// ith bucket par 7 nahi hai, toh ask recursion chote array mei
	// last index of 7 laakar dede
	return lastIndex(a, n, i + 1);
}
// print all indices of 7
void print(int *a,int n,int i){
    if(i==n)return;
    if(a[i]==7)cout<<i<<" ";
    print(a,n,i+1);
}
int main() {
    int a[]={1,2,4,5,7,3,5,7};
    int n=sizeof(a)/sizeof(int);
    (check(a,n))?cout<<"found"<<endl:cout<<"not found"<<endl;
     cout<<firstindex(a,n,0)<<endl;
    cout<<lastindex(a,n,n-1)<<endl;
    print(a,n,0);
    return 0;
}
