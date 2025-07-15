//LARGEST OF N NUMBERS
#include <iostream>
#include <climits>//HEADER FILE FOR INT_MIN AND INT_MAX
//INT_MAX= 2^31-1 
//INT_MIN=-2^31
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    int large=INT_MIN;
    int i=1;
    while(i<=n){
        cin>>a;
        if(a>large)large=a;
        i++;
    }
    cout<<large;
    return 0;
}