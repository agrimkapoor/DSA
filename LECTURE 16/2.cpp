// is array sorted (way 3) :iterator ke through
// array and n will not change
#include <iostream>
using namespace std;
bool checksorted(int *a ,int n,int i){
    //1.base case
        if(i==n-1 || i==n)return true;
    //2.recursive case
        if(a[i]<=a[i+1]){
            return checksorted(a,n,i+1);
        }
        else{
            return false;
        }
}
int main() {
    int a[]={1,2,3,5};
    int n=sizeof(a)/sizeof(int);
     (checksorted(a,n,0))?cout<<"sorted" : cout<<"not sorted";    
    return 0;
}