// INPUT AND OUTPUT IN A ARRAY
#include <iostream>
using namespace std;
int main() {
    int a[5];
    for(int i=0;i<5;++i){
        a[i]=i+1;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int b[100];// index 0 to 99
    // we can also store values in no of buckets less than the size of the array
    int n;// n can be less than or equal to size(100)
    n=10;
    // so n is length of array here
     for(int i=0;i<n;++i){
        cin>>a[i];//reading from user
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}