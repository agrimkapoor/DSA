//LINEAR SEARCH : MULTIPLE OCCURENCE OF KEY
#include <iostream>
using namespace std;
int main() {
    int a[]={2,4,5,1,3};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int i;
    int flag=1;
    for( i=0;i<n;i++){
       
        if(key==a[i]){
            flag=0;
            cout<<"KEY IS AT INDEX "<<i<<" ";
            break;
        }
    }
    if(flag==1){
         cout<<"KEY IS NOT FOUND ";
    }

    return 0;
}