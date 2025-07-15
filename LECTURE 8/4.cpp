#include <iostream>
using namespace std;
int main() {
    int a=1;
    int s=(a++)+(++a);
    cout<<s<<" "<<a;
    return 0;
}