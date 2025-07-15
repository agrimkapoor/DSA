//COUNT SET BITS APPROACH 3
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=31;i>=0;i--){
       if( n&(1<<i) )ans++;
    }
    cout<<ans;   
   
    return 0;
}