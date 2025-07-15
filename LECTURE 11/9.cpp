//function to return factorial of a number
// function to find nCr
#include <iostream>
using namespace std;
int factorial(int n){// fact waala fn will be called in main so fact above main
    int pro=1;
    int i=1;
    while(i<=n){
    pro*=i;
    i++;
    }
    return pro;

}
int ncr(int n,int r){// ncr me fact call hoga so fact waala fn must be above ncr
    // ncr is always an integer
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    return a/(b*c);

}
int main() {
    int n,r;
    cin>>n>>r;
    int s=factorial(n);
    cout<<s<<" ";
    int k=ncr(n,r);
    //ncr(5,2);
      cout<<k<<" ";
    return 0;
}