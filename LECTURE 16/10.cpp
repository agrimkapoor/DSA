//selection sort 
#include <iostream>
using namespace std;
// iterative
void selectionsort(int *a,int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for( int j=i+1;j<n;j++){// i have to find minimum from range a[i] to a[n-1]
            if(a[j]<a[mini])mini=j;
        }
        swap(a[i],a[mini]);
    }
}
// recursive :outer loop by recursion
void selectionsort1(int *a,int n,int i){
    //1.base case
    if(i==n-1)return;
    //2.recursive case
        int mini=i;
        for( int j=i+1;j<n;j++){
            if(a[j]<a[mini])mini=j;
        }
        swap(a[i],a[mini]);
        selectionsort1(a,n,i+1);
}

//wrong method
void selectionsort2(int *a,int n,int i,int j){
    //1.base case
    if(i==n-1)return;
    //2.recursive case
    
        int mini=i; // har j ki call mei mini is becoming i
        if(j<=n-1){
            if(a[j]<a[mini])mini=j;
            selectionsort2(a,n,i,j+1);
        }
        
        else{
        swap(a[i],a[mini]);// ye else ke liye bhi hona hai
        // so wrong

       
        selectionsort2(a,n,i+1,i+2);//j ka loop start from i+2 in every iteration of i
        }

        //so this  method is wrong 
        // pass mini as arg
        
}


// passing mini as arg
void selectionsort3(int *a, int n, int i, int j, int mini) {
    // Base case: when the entire array has been sorted
    if (i == n-1) return;

    // Recursive case: traverse the array
    if (j < n) {
        // Update the minimum index if a smaller element is found
        if (a[j] < a[mini]) mini = j;
        // Continue the j-loop (inner loop)
        selectionsort3(a, n, i, j + 1, mini);//mini j hogaya tha so pass mini and not i
    } 
    else {
        // Swap the smallest element found in the current pass with the first element of the unsorted part
        swap(a[i], a[mini]);
        // Continue with the next element (outer loop)
        selectionsort3(a, n, i + 1, i + 2, i + 1);
    }
}



int main() {
    int a[]={1,5,8,3,2,1,4};
    int n=sizeof(a)/sizeof(int);
    selectionsort3(a,n,0,1,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}