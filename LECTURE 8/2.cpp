//bitwise operators
#include <iostream>
using namespace std;
int main() {
    cout<<(5&7);// this bracket is important otherwise error
    cout<<" "<< (5|7);
    cout<<" "<< (5^7);
    cout<<" "<< (1<<3);// agar bracket nhi lagaye toh cout hi kardega
    // left shift and cout me <<
    cout<<" "<< (2<<5);
    cout<<" "<< (1<<31);//INT_MIN
    // bitwise operators must be used within brackets
    return 0;
}