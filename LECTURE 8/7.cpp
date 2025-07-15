//count set bits-approach 2
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int bit_val=(n&1);
        count+=bit_val;
        n=n>>1;//   n>>=1;
    }
    cout<<count;
    return 0;
}