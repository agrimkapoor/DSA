// COUNTING NUMBER OF BINARY SUBSTRINGS
// CONDITION: EQUAL NUMBER OF ZEROS AND ONES
//          : ZEROS AND ONES TOGETHER 
#include <iostream>
using namespace std;
int main() {
    int a[]={1,1,0,0,0,1,1,1,1,0,0,0,1};
    int n=sizeof(a)/sizeof(int);
    int prev=0;// number of elements before the zero index
    int curr=1;// zero index waale element ko count karliya
    int substring=0;//initially number of substrings are zero

    for(int i=1;i<n;i++){//we will start from index 1 waala element
        if(a[i]==a[i-1]){
            curr++;
        }
        else{
            substring+=min(prev,curr);
            prev=curr;
            curr=1;//since we are on the present element
        }
    }
    substring+=min(prev,curr);
    cout<<substring;
    return 0;
}