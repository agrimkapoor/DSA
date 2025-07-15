// array ka user input 
#include <iostream>
using namespace std;
int main() {
    int a[100];//  MAX IS 10 KI POWER 6
    int n;
    cout<<"enter n :(max 100)";// n can be less or equal to 100
    // we have occupied 100 spaces
    // but how much spaces pe will we assign the value
    // so n is the length of the array here 
    // baaki saari garbage value hogi
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    // 2nd way  :WE DONT PREFER THIS METHOD
    
    // int n;
    // cin>>n; 
    // int a[n];// n pehle le lena user warna g.v in n

    // AB N SIZE KA HI ARRAY BANEGA 
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    return 0;
}