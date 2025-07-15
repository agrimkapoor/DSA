//SQUARE ROOT OF A INTEGER
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;//AS WE ARE USING I OUTSIDE OF FOR SCOPE
    for( i=0;i*i<=n;i++){
        
    }
    //  int i=0;
    // for( ;i*i<=n;i++){
        
    // }
    i=i-1;
    float ans=i;
    int cp=1;
    int p=2;
    float inc=0.1;
    while(cp<=p){
        while(ans*ans<=n){
            ans=ans +inc;
           
        }
        ans=ans-inc;
        inc=inc/10;
        cp=cp+1;
    }
    cout<<ans;
    //10 ka o/p is 3.16
    //16 ka o/p is 4 and not 4.00
    return 0;
}