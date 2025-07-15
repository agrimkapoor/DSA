// is array sorted (way 2)
#include <iostream>
using namespace std;
bool checksorted(int *a ,int n){
    //1.base case
    if(n==1 || n==0){// n<=1
        return true;
    }
    //2.recursive case
    if(a[n-1]>=a[n-2]){
        return checksorted(a,n-1);
    }
    else{// can skip else keyword as if me return
        return false;
    }
}
int main() {
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(int);
    // if(checksorted(a,n)){
    //     cout<<"sorted";
    // }
    // else{
    //     cout<<"not sorted";
    // }
    (checksorted(a,n))?cout<<"sorted" : cout<<"not sorted";
    return 0;
}