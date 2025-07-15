// REVERSE A STRING  (do not print in reverse order)
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[]="hello";
    // cin>>a // ignore whitespace
    // so use cingetline()
    // cinget() reads character wise while the above two  read strings
    int i=0;
    int j=strlen(a)-1;
    while(i<j){//at i==j pe same ele hi hoga
        swap(a[i],a[j]);
        i++;
        j--;
        
    }
    // i and j are index pointers (not actual waala pointer) 



    // this is how can we reverse array also
    cout<<a;
    
    return 0;
}