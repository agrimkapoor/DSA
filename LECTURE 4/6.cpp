//SIMPLE INTEREST
#include <iostream>
using namespace std;
int main() {
    int p,r,t;
    float si;
    cin>> p >> r >> t;
    si=(p*r*t)/100.0; //int/float=float
    //p*r*t/100  int/int ab answer agar 0 aaye toh float value si me 0 store hoga though int (int =float for no decimal)
    // int / float me agar for eg 3.0 toh o/p me 3 hoga print
    
    // can also do si=(p*r*t*1.0)/100
    cout<<"Simple interest: "<<si;
    return 0;
}