// sum of first n natural nos(1+2+3..n)
#include <iostream>
using namespace std;
int sum(int n){
    //1.base case
    if(n==1)return 1;
    //2.recursive case
     // f(n)=n+f(n-1)
    return n+sum(n-1);
}
// way 2
int sum2(int n){
    //1.base case
    if(n==1)return 1;
    //2.recursive case
    int chotiprob=sum(n-1);
    int badiprob= n+ chotiprob;
    return badiprob;
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}