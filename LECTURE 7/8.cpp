//PRINT PRIMES 2 TO N
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int no=2;no<=n;no++){
        int i;
        for( i=2;i<=no-1;i++){
            if(no%i==0){
                break;
            }
        }
        if(i==no)
        cout<<no<<" ";
    }
    return 0;
}