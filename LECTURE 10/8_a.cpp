//INSERTION SORT
#include <iostream>
using namespace std;
int main() {
    int a[]={2,4,5,1,3};
    int n=sizeof(a)/sizeof(int);
    for(int i=1;i<n;i++){
        int hpc=a[i];// picked the first element from unsorted deck
        int j=i-1;
        while(j>=0){
            if(a[j]>hpc){
                a[j+1]=a[j];
            }
            else{
                break;
            }
            j--;
        }
        a[j+1]=hpc;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}