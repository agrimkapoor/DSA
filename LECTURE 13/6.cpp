//take i/p of n and then i/p n strings
#include <iostream>
using namespace std;

void takeNStringsAndPrint(){
    int n;
    cin>>n;
    //cin.ignore();
    cin.get();//it not ignore whitespace
    // we didnt store the i/p of cin.get()
    //yeh nhi likhoge toh ek string will be just empty
    // read karlo ,store mat karo ,ignore  hi  ho jaayega
    char a[100];
    for(int i=0;i<n;i++){
        cin.getline(a,100);//default delimiter is '\n'
        cout<<a<<endl;
    }
    
}
int main() {
    takeNStringsAndPrint();
    return 0;
}