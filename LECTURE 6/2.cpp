// boston number
#include <iostream>
using namespace std;
int sumofdigits(int n){
    // yaha pe n(arg) ko jo bhi change karoge
    // jis fn ne call kiya hai woh waala parameter change nhi hoga as call by value
    int sum=0;
    while(n!=0){
       sum+= n%10;
        n/=10; // n is changing in only this function 
    }
    return sum;
}
int sumofdigitsofprimefac(int n){
    // n ke factors :2 se n ki range me honge

    int i=2;// dont include 1 waala factor warna infinite loop
    int sum=0;
        while(i<=n){//we have to include n waala factor as n is a factor of itself
       
        while(n%i==0){
            // sum+=i;
            // we dont have to add i
            // but digits of i 
            // call sumofdigits waala function 
            // so sumofdigits waala fn must be above this func
           int k= sumofdigits(i);
           sum+=k;

            n=n/i;
        }
        i++;
    }
    return sum;
}
bool checkboston(int n){
    int a=sumofdigits(n);// call by value hoga so n (parameter  ) will not be updated
    int b=sumofdigitsofprimefac(n);// call by value (arg and parameter are diff variables in call by value)
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int n;
    cin>>n;
    bool ans=checkboston(n);
    if(ans){
        cout<<n<<" is a boston number\n";
    }
    else{
        cout<<n<<" is not a boston number\n";
    }
    return 0;
}