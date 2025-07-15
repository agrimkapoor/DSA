// factorial of n  nikalna hai
#include <iostream>
using namespace std;

int fact(int n){// THIS FN WILL RETURN FACTORIAL OF N
    //1.base case 
    if(n==0)return 1;//factorial of 0 [ n is 0 ] is 1[0!=1]
    //2.recursive case
     // f(n)=n * f(n-1)
    return n*fact(n-1);// WE HAVE TO RETURN FACTORIAL OF N
    // fact(n-1) is FACTORIAL OF N-1
    // bina store kare return kar rhe hao
     // we have to return badi prob
    //badi prob ko choti prob me tod diya (recurrence relation)
}

// way 2
int fact2(int n){
    //1.base case 
    if(n==0)return 0;
     // jab if me return toh no need to write else keyword
    //2.recursive case
    // assumption hai ki choti prob recursion solve karega
    int chotiprob=fact(n-1);
    int badiprob =n*chotiprob;//badiprob ko write in terms of choti prob (recurrence reln)
    return badiprob;
    // store karke return kar rhe hai
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n);// we are not storing but just printing it
    
    // agar mai fn ko call nhi karunga toh woh execute nhi hoga
    return 0;
}