// binary search
#include <iostream>
using namespace std;
int binarysearch(int*a,int s,int e,int key){// we dont give n but give s and e
 //1.base case
    if(s>e)return -1;
 //2.recursive case
  int mid=(s+e)/2; // (s+e)>>1
  if(a[mid]==key)return mid;
  // recursion ab chote array pe find karega index
        //choti problem will be half array
  else if(key>a[mid])return binarysearch(a,mid+1,e,key);
  else return binarysearch(a,s,mid-1,key);
//dont forget to write return
}
int main() {
    int a[]={1,4,5,8};// sorted
    int n=sizeof(a)/sizeof(int);
    cout<<binarysearch(a,0,n-1,5);
    return 0;
}