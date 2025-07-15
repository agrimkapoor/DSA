// PHONE KEYPAD PROBLEM
#include <iostream>
using namespace std;
char keys [][100]={"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void solve (char*ip,char*op,int i,int j){
    //1.base case 
    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    //2.recursive case
     int dig=ip[i]-'0';
        for(int k=0;keys[dig][k]!=0;k++){
            op[j]=keys[dig][k];
            solve(ip,op,i+1,j+1);
        } 
}
int main() {
    char ip[100];
    char op[100];
    cin>>ip;
    solve(ip,op,0,0);
    // i is traversing on ip 
    // j is traversing on op
    return 0;
}