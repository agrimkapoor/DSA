//FUNCTION TO ADD TWO NUMBERS
#include <iostream>
using namespace std;

void printsum(int a,int b){//we need to just print so we dont want to return anything
// these are arguments
//parameters are received in arguments
cout<<"sum :"<<a+b<<endl;

}
// parameters and arguments ke naam are not dependent
// toh argument me int x ,int y bhi likh sakte the

// agar sum return karna hoga
int sum(int a,int b){
    int ans=a+b;
    return ans;// bucket ki value return hogi
    // ans is int so return type is int 
}
int main() {
    int a,b;
    cin>>a>>b;
    printsum(a,b);// a and b are passed as parameters
    // parameters ki value will be stored in arguements waala var
    // but parameters and arg are diff varables

    // printsum(10,20) this is also correct
    int ans= sum(a,b);
    // jo return huya humne usse store karliya
    cout<<ans;
    // jo ans return huya woh int hai toh usse int bucket me store kar liya
    // ye waala ans bucket alag hai as scope alag hai
    
    // jo value return huyi usse store kar liya ek bucket me aur phir bucket ko print kar diya
    // ya fir agar store na karni ho toh we can directly print 
    
    //cout<<sum(a,b);

    return 0;
}