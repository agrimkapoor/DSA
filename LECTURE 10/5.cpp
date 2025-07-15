//print array in reverse order
#include <iostream>
using namespace std;
int main() {
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    // we just have to print and not reverse the elements
    // toh loop ulta chala do
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }

    return 0;
}
