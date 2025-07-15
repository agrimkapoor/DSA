//BINARY SEARCH
#include <iostream>
using namespace std;
int binarySearch(int*a,int key,int s,int e){
    //1.base case
    if(s>e)return -1;
    //2.recursive case
    int mid=(s+e)/2;
    if(a[mid]==key)return mid;
    else if(a[mid]>key)return binarySearch(a,key,s,mid-1);
    else return binarySearch(a,key,mid+1,e);
        
}
int main() {
    int a[]={1,3,4,6,8,9};
    int n=sizeof(a)/sizeof(int);
    int key=6;
    cout<<binarySearch(a,key,0,n-1);
    return 0;
}