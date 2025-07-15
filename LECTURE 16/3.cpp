// sum of elements of array 
#include <iostream>
using namespace std;

int sum1(int *a,int n){
    //1.base case
        if(n==0)return 0;
    //2.recursive case
     return a[0]+sum1(a+1,n-1);
}
int sum2(int *a,int n){
    //1.base case
        if(n==0)return 0;
    //2.recursive case
     return a[n-1]+sum2(a,n-1);
     // can also write sum(a,n-1)+a[n-1]
}
int sum3(int *a,int n,int i){
    //1.base case
        if(i==n)return 0;
    //2.recursive case
     return a[i]+sum3(a,n,i+1);
}
int main() {
     int a[]={1,2,3,4};
     int n=sizeof(a)/sizeof(int);
     cout<<sum1(a,n)<<endl;
     cout<<sum2(a,n)<<endl;
      cout<<sum3(a,n,0);
    return 0;
}