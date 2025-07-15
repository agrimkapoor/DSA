//count set bits-approach 1
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int rem=n%2;// rem is 0 or 1
        count+=rem;// add rem to count 
        //if(rem==1)count++
        n/=2;
    }
    cout<<count;
    return 0;
}