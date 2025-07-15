//passing array to functions
#include <iostream>
using namespace std;

void printarray(int a[],int n){
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
int main() {
    int a[ ]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    bubblesort(a,n);
    printarray(a,n);// main fn waala array change hogaya
    
    // hamne printarray waala fn do baar call kiya

    // so we can call fn multiple times instead of writing code again
    // hence fn increases reusability and readibility of code


    return 0;
}