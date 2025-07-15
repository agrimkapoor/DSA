//string to int
#include <iostream>
#include <cstring>
using namespace std;
int stringToInt(char*a,int n){
    //1.base case
        if(n==0)return 0;//AGAR ARRAY ME NO ELEMENTS TOH USKI INTEGER VALUE 0 HI HOGI
    //2.recursive case
        int x=a[n-1]-'0';//convert a[n-1] to int 
        return (stringToInt(a,n-1))*10 + x ;
}
int main() {
    char a[]="1234";
    cout<<stringToInt(a,strlen(a));
    return 0;
}