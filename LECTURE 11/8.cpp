//FUNCTION TO CHECK IF A NUMBER IS PRIME OR NOT
//SO RETURN TYPE OF THIS FUNCTION IS BOOL

#include <iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0)return false;//false ke jagah 0 bhi likh sakte hai
    }
    return true;// true ke jagah 1 bhi likh sakte hai
}
// fn to print a number is prime or not :VOID
void printprimeornot(int n){
 int i=2;
 while(i<=n-1){
    if(n%i==0){
        break;
    }
    i++;
 }
 if(i==n){
    cout<<" prime";
 }
 else{
     cout<<" not prime";
 }

}

//FN TO PRINT PRIMES FROM 2 TO N : VOID
//void me return ; se vo waala fn end ho jaata hai
void printPrimes(int n){
    for(int no=2;no<=n;no++){
       if(checkPrime(no)){
        cout<<no<<" ";
       }
    }
}

int main() {
    int n;
    cin>>n;
    (checkPrime(n))?cout<<"PRIME\n":cout<<"NOT PRIME\n";
    // bool ans=checkprime(n);
    // if(ans==true){
    //     //if(ans){ this is also correct
    //     cout<<"prime";
    // }
    // else{
    //     cout<<"not prime";
    // }
    printPrimes(n);

    
    return 0;
}