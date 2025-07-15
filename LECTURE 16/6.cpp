// multiply two numbers using recursion : a*b 
#include <iostream>
using namespace std; 
int mult(int a,int b){
    // a*b=a+a+a added b times

    //base case
    if(b==0)return 0; 
    // recursive case
    return a+ mult(a,b-1);
}
int main() {
    cout<<mult(4,3);
    return 0;
}
