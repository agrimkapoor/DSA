//ABCDEEDCBA
//ABCDDCBA
//ABCCBA
//ABBA
//AA
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int i=1;
        while(i<=n-row+1){
            cout<<(char)(i+64)<<" ";//(char) i+64 me int hoga so wrong
            // i ko char then + operator converts in int so wrong
            i++;
        }
        int j=1;
        i--;
        while(j<=n-row+1){
            cout<<(char)(i+64)<<" ";
            i--;
            j++;
        }
        cout<<"\n";
        row=row+1;
    }
    return 0;
}