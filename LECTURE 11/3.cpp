//TERNARY OPERATOR
#include <iostream>
using namespace std;
int main() {
    int a=10;
    // (condition)? On true ye chalega :On false ye chalega
    (a%2==0)?cout<<"even\n" : cout<<"odd\n";

    // we can also assign value using ternary operator
    int x=((a>5)?5000:-5000);
    cout<<x<<endl;

    //or 
    int y;
    (a>5)? y=5000 : y=-5000;

    bool ans=(a%2==0)?true:false;// just like the condition we write in if
    if(ans){
        cout<<"even \n"; 
    }
    else{
        cout<<"odd \n";
    }


    return 0;
}