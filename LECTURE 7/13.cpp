// global variable : saare scopes se bahar hoga variable
// kisi bhi curly  brace me nhi hoga

#include <iostream>
using namespace std;
int a=-100;
int main() {
    cout<<a<<endl;// global scope dekhega
    int a=1;
    // execution will start from main fn
    // cout<<a  yaha pe a not in main scope
    // so check global scope

    cout<<a<<endl;// main ka scope dekhega pehle


    cout<<::a<<endl;// global scope dekhega
    // :: ->scope resolution operator
    // global me cout nhi likh sakte
    // so statements must be in a function

    return 0;
}