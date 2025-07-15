//continue
#include <iostream>
using namespace std;
int main() {
    int i;
    i=2;
    while(i<=5){
        cout<<i<<" ";
        if(i==3){
            i=i+1;
            continue;//infinite loop if we not write i=i+1
        }
        i=i+1;
    }
    return 0;
}