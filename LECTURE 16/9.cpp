//BUBBLE SORT
// badi prob is to sort array of size n elements
// just choti prob is to sort n-1 elements
// recursion will do the task of chotiprob

// ek element ham sort karenge baaki recursion karega
// we will do for i=0 
// baaki remaining i ke liye recursion karega
#include <iostream>
using namespace std;
//iterative 
void bubblesort(int *a,int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }

}
// recursive :outer loop by recursion
void bubblesort1(int *a,int n,int i){
    //1.base case
    if(i==n-1)return ;
    //2.recursive case
        for(int j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
        bubblesort1(a,n,i+1);
        // i ka loop recursion se hogaya
}
// completely recursive :j ka loop also by recursion
void bubblesort2(int *a,int n,int i,int j){
    //1.base case
    if(i==n-1)return ;
    //2.recursive case
            if(j<=n-2-i){
                if(a[j]>a[j+1])swap(a[j],a[j+1]);

                bubblesort2(a,n,i,j+1);
            }
            else{// cant skip else keyword as if me return nhi hai
            bubblesort2(a,n,i+1,0);// j har i ki iteration me 0 se start hoga
            }

}
void bubblesort3(int *a,int n,int i,int j){
    //1.base case
    if(i==n-1)return ;
    //2.recursive case
            if(j<=n-2-i){
                if(a[j]>a[j+1])swap(a[j],a[j+1]);

                bubblesort3(a,n,i,j+1);
                return ;
            }
           
            bubblesort3(a,n,i+1,0);// ab else keyword can be skipped
}



int main() {
    int a[]={2,5,3,4};
    int n=sizeof(a)/sizeof(int );
    bubblesort3(a,n,0,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    // ab array sorted hi jaayega next line waali fn call me
    // bubblesort1(a,n,0);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // ARRAY IS PASSED BY REF SO MAIN WAALA ARRAY CHANGE HOGA
    return 0;
}