// default arguements
#include <iostream>
using namespace std;
int add(int a=0,int b=0,int c=0){// default argument last me hona chaiye hai(right to left)
    return a+b+c;
}
int main() {
    cout<<add(10,20,30)<<endl;// now c=30
    cout<<add(10,20)<<endl;// now c=0
    cout<<add(10)<<endl;
    cout<<add()<<endl;

    return 0;
}