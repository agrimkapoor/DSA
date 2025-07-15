// elephant ways : rook can move right or down only
#include <iostream>
using namespace std;
 
int ways(int i,int j){
    //1.base case
    if(i==0 and j==0)return 1;
    //2 .recursive case
     int ans=0;
     for(int k=0;k<i;k++){
        ans+=ways(k,j);
     }
     for(int k=0;k<j;k++){
        ans+=ways(i,k);
     }
     return ans;
}
int main() {
    cout<<ways(3,3);
    return 0;
}