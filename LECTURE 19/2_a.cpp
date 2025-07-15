//PRINT SUBSEQUENCES OF STRING

#include <iostream>
using namespace std;
void subsequence(char*ip,char*op,int i,int j){
    //1.base case
    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    //2.recursive case
            //1.ip ke ith char ko ignore and choti prob ka recursion ko bolo
            subsequence(ip,op,i+1,j);
            //2.ip ke ith char ko lelo in op array and choti prob ka recursion ko bolo
            op[j]=ip[i];
            subsequence(ip,op,i+1,j+1);

}
int main() {
    char ip[100]="abc";
    char op[100];
    subsequence(ip,op,0,0);
    return 0;
}