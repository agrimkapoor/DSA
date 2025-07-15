//PRINT SUBSEQUENCES OF STRING
#include <iostream>
using namespace std;
void solve(char*in,char*op,int i,int j){
    //1.base case
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;//yeh likhna zaroori hai
    }
    //2.recursive case
        //1.include
        op[j]=in[i];
        solve(in,op,i+1,j+1);
        //2.exclude
        solve(in,op,i+1,j);
}
//agar pehle include karenge toh ulte order mei print honge
int main() {
    char in[]="abc";
    char op[100];
    solve(in,op,0,0);
    return 0;
}