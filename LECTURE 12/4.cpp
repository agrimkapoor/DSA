// function and array and pointers
#include <iostream>
using namespace std;
void printarray1(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void printarray2(int*p,int n){
for(int i=0;i<n;i++){
        cout<<p[i]<<" ";//can also use *(p+i)
    }
    cout<<endl;
}
void printarray3(int*a,int n){// arg me int*a , para me a   scope of both a is diff as they are in diff fn
for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";// can also use a[i]
        // a[i]==*(a+i)
    }
    cout<<endl;
}

int main() {
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    printarray1(a,n);
    printarray2(a,n);
    printarray3(a,n);


    return 0;
}