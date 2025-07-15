//CHARACTER ARRAYS
#include <iostream>
using namespace std;
int main() {
    char a[]={'A','B','C'};
    char b[]={'x','y','\0'};
    char c[]="hello world";
    char d[100]="agrim";

    //address of ch bucket waali property
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    // for(int i=0;d[i]!='\0';i++)cout<<d[i];
    return 0;
    //output :
    //ABCîsu└␦@
    // xy
    // hello world
    // agrim
}