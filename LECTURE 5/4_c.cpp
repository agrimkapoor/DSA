//PRINT ALL PRIME NUMBERS FROM 2 TO N
#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main() {
    int N;
    cin>>N;
    for(int i=2 ;i<=N;i++){
        //ab agar i prime hai toh hi print karna
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}