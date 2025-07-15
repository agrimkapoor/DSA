//dereference operator
#include <iostream>
using namespace std;
int main() {
    int a=10;
    cout<<&a<<endl;
    int *ap=&a;// yaha pe star is not dereference operator
    cout<<ap<<endl;
    cout<<*ap<<endl;
    cout<<*(&a)<<endl;
    return 0;
}