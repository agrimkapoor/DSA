//modulus operator
#include <iostream>
using namespace std;
int main() {
    cout<< 5%2<<" ";
    cout<< 5%8<<" ";// negative rem will not be reported
    cout<<-5%2<<" ";// ans will be negative of 5%2
    return 0;
}