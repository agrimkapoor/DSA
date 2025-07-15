// n th term of fibonacci  batana hai
// value of n:     0    1   2   3   4   5   6   7   8   9   10
// value of f(n):  0    1   1   2   3   5   8   13  21  34  55
#include <iostream>
using namespace std;

int fibo(int n){
    //1.base case
        if(n==0 || n==1) return n;
    //2.recursive case
     return fibo(n-1) + fibo(n-2);
}

int fibo2(int n){
    //1.base case
    if(n==0 ||n==1)return n;
    //2.recursive case
      // recurrence relation  f(n)=f(n-1)+f(n-2)
    int chotiprob1=fibo(n-1);// assumption
    int chotiprob2=fibo(n-2);// assumption
    int badiprob=chotiprob1+ chotiprob2;
    return badiprob;
}
int main() {
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}