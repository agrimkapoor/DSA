//SQUARE ROOT OF A INTEGER (METHOD 1)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    float ans=0;// the answer must be a float bucket
    int i=0;
    while(i*i<=n){
        i=i+1;
    }
    ans+=i-1;
    int p=2;// I want ans upto 2 decimal places
    int cp=1;
    float inc=0.1;// THIS SHOULD BE FLOAT
    while(cp<=p){
        while(ans*ans<=n){
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;//float/int  so bucket of inc has to be float
    cp++;
    }
    cout<<ans;
    return 0;
}