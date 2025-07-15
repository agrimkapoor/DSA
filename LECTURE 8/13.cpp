//ab l se r tak ke bits ko 1 kardo 
// mask jo last ques mei banaya tha uska complement lelo
#include <iostream>
using namespace std;
int main() {
    int no;
    cin>>no;
    int l=4 ,r=2;
    int mask=((~0)<<(l+1)) | ((1<< r)-1);
    mask=~mask;
    cout<<(no | mask); // ab or karna hoga
    return 0;
}