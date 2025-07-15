//SELECTION SORT
#include <iostream>
using namespace std;
int main() {
    int a[]={2,4,5,1,3};
    int n=sizeof(a)/sizeof(int);
    //index i pe correct element laayo
    for(int i=0;i<=n-2;i++){
        int mini = i;// dont use min as it is a keyword
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        swap(a[i],a[mini]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}