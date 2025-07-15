// n stairs
#include <iostream>
using namespace std;
int ways(int n,int k){
    //base case
    if(n==0)return 1;
    if(n<0)return 0;
    //recursive case
    int ans=0;
    for(int i=1;i<=k;i++ ){
       ans+= ways(n-i,k);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    cout<<ways(n,3);
    return 0;
}