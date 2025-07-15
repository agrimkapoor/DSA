// READING A STRING WITH WHITESPACE CHARACTERS :cin.get()
#include <iostream>
using namespace std;
int main() {
    char ch;
    // cin>>ch;
    ch=cin.get();// THIS WILL NOT IGNORE WHITESPACE CHARACTERS
    while(ch!='$'){
        cout<<ch<<"\n";
        // cin>>ch;
        ch=cin.get();
    }
    return 0;
}