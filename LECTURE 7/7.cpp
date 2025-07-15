/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        int x=(row %2 !=0)?1 :0;
        for(int i=1;i<=row;i++){
            cout<<x<<" ";
            x=1-x;
        }
        cout<<endl;
    }
    return 0;
}