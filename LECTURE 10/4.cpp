//largest element in array
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[]={2,4,6,3,1,4};
    int n=sizeof(a)/sizeof(int);
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>large)large=a[i];
    }
    cout<<large;
    return 0;
}