//dma se array return
//sma se return nhi kar sakte kyuki
// jaise hi fn khatam waise hi array khatam
#include <iostream>
using namespace std;
int *createArray(int n){
    int*arr=new int [n];
    for(int i=0;i<n;i++){
        arr[i]=(i+1)*10;
    }
    return arr;
}
int main() {
    int n;
    cin>>n;
    // n=10 bhi likh sakte hai
    int * a=createArray(n);
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        // cout<<a[i]<<" ";
    }
    // DELETING AN ARRAY
	delete []a; // a jis array ko point kar raha hai heap mei usse free kardo
	a = NULL;

    return 0;
}