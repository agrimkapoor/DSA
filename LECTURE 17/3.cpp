//MERGE SORT
#include <iostream>
using namespace std;
void merge(int *a,int*b,int*c,int s,int e){
    int mid =(s+e)/2;
    int i=s;    // b
    int j=mid+1;// c
    int k=s;    // a
    while(i<=mid && j<=e){
        if(b[i]<c[j])a[k++]=b[i++];
        else a[k++]=c[j++];
    }
    while(i<=mid){
    a[k++]=b[i++];
    }
    while(j<=e){
        a[k++]=c[j++];
    }
}
void mergesort(int*a,int s,int e){
    //1.base case
    if(s>=e)return;//ek ele hai toh woh sorted
    //2.recurisve case
    int mid=(s+e)/2;
    // 1. Divide karo a[] ko b[] and c[] ke andar
    int b[100];
    int c[100];
    for(int i=s;i<=mid;i++){
        b[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=a[i];
    }
    //2.sort
    // 2.sorting karwado chote array ki recursion se
    // badi prob was sorting
    // so choti prob is also sorting
     mergesort(b,s,mid);
     mergesort(c,mid+1,e);
     //3.merge b and c in a
     merge (a,b,c,s,e);
}
int main() {
    int a[]={1,4,5,2,3,5};
    int n=sizeof(a)/sizeof(int );
     mergesort(a,0,n-1);
    // mergesort me merge called hai toh write merge fn above mergesort fn

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}