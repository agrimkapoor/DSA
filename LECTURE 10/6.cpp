//BUBBLE SORT
#include <iostream>
using namespace std;
int main() {
    int a[]={2,4,5,1,3};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<=n-2;i++){
        int flag=1;
        for(int j=0;j<=n-2-i;j++){//OPTIMISATION 2
            if(a[j]>a[j+1]){
                flag=0;
                swap(a[j],a[j+1]);
            }
        }
        if(flag==1){//no swap happened in the ith iteration
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}