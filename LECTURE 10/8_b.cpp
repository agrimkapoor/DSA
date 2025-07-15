// INSERTION SORT 
#include <iostream>
using namespace std;
int main() {
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    int i=1;
    //array is sorted from 0 to i-1 before starting the ith iteration
    while(i<=n-1){
        int hpc=a[i];//store a[i] in a variable 
        int j=i-1;
        while(j>=0 and a[j]>hpc){//we can use and instead of &&  
        // we can use or instead of ||
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=hpc;
        i++;
    }
    i=0;
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}