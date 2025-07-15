// EMPTY GRID WAYS
#include <iostream>
using namespace std;
int ways(int i,int j){
    //1.base case
    if(i==0 || j==0)return 1;
    //2.recursive case
     return ways(i-1,j)+ways(i,j-1);
}
int main() {
    cout <<ways(3,3);
    return 0;
}