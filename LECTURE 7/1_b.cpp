//square root of a number(integer) 
// METHOD 2
#include <iostream>
using namespace std;
int main() {
    int n=11;
    float ans=0;
    float inc=1;
    int p=3;
    int cp=0;
    while(cp<=p){
        while(ans*ans<=n){
        ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
        cp=cp+1;
    }
    cout<<ans;
    
  

    return 0;
}