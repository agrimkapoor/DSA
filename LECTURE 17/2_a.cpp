//string to int
#include <iostream>
#include<cstring>
using namespace std;


int stringtoint(char*a,int n){
// base case
if(n==0){// agar empty string hai to bhi return 0
    return 0;
}
// recursive case 
int lastdigit=a[n-1]-'0';

return stringtoint(a,n-1)*10 +lastdigit;
}
int main() {
    char a[]="1234";
    // cout<<int(a) //wrong as a is address usko intme nhi kar sakte
    

    // cout<<'1'+'0'; // o/p is 97
    int n=sizeof(a)/sizeof(char);
    //int n=strlen(a)
    //phir arg me n hi jaayega
    int x=stringtoint(a,n-1);
    cout<<x<<endl;
    cout<<x+10<<endl;
    cout<<x+10+5<<endl;
    return 0;
}