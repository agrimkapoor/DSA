//LINEAR SEARCH : SINGLE OCCURENCE OF KEY
#include <iostream>
using namespace std;
int main() {
    int a[]={2,4,5,1,3};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int i;//i ko loop se bahar use karna hoga
    //so declare i outside of for loop

         // for( int i=0;i<=n-1;i++){ //THIS i ka scope is just for loop
        // dono jagah int laga doge toh not correct output
        
    for( i=0;i<n;i++){
        if(key==a[i]){
            cout<<"KEY IS AT INDEX "<<i<<" ";
            break;
        }
    }
    if(i==n){
         cout<<"KEY IS NOT FOUND ";
    }

    return 0;
}