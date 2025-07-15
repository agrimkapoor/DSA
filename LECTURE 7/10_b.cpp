#include <iostream>
using namespace std;
int main() {
    int n,row,i;
    cin>>n;

    row=1;
    while(row<=n){
        //1. INCREASING CHARACTERS
        i=1;
        char ch='A';
        while(i<=n+1-row){
            cout<<ch<<" ";
            ch++;//ch=ch+1 
            i++;
        }
        //2.DECREASING CHARACTERS

        ch--;
        i=1;
        while(i<=n+1-row){
            cout<<ch<<" ";
            ch--;
            i++;
        }
        

        cout<<endl;
        row++;
    }
    
    return 0;
}