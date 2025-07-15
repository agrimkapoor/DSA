// check if array is sorted or not (WAY 1)
// so bool
#include <iostream>
using namespace std;
bool checkSorted(int *a,int n){
    //1.base case
        if(n==0 || n==1)return true;
        // single ele is sorted 
        // recursive cond fails for n==1
        // agar main fn se empty array aaya toh n==0
    //2.recursive case
      //badi prob is to check ki n ele sorted hai ya nhi
      //choti prob :n-1
      if(a[0]<=a[1]){
        return checkSorted(a+1,n-1);
        // a+1 waala array me a+1 jaha point kar rha hoga woh hi index 0 hojayega
      }
      
      return false;// else condition
      
}

int main() {
    int a[]={1,2,4,3};
    int n=sizeof(a)/sizeof(int );
    if(checkSorted(a,n)){
      cout<<"sorted";
    }
    else{
      cout<<"not sorted";
    }
    return 0;
}