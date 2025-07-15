//mask creation
//ek no diya hai
//uske l se r tak ke bits ko 0 kardo
// no--> 1011011
//index :6543210
//l=4 and r=2
//o/p is 1000011
//we have to create a mask 
// no & mask will give us the answer
//mask me l se r ki range mei 0 hoga and remaining pe 1
//bit & 1 = bit    bit & 0 = 0
//mask is 1100011
//to create this do or of 1100000 ,0000011
//to create 1100000 : all 1's mei left shift 5 times yaani l+1 times
//to create 0000011 : it is 0000100 - 1 : (1<<r)-1
#include <iostream>
using namespace std;
int main() {
    int no;
    cin>>no;
    int l=4 ,r=2;
    int mask=((~0)<<(l+1)) | ((1<< r)-1);
    cout<<(no&mask);
    return 0;
}