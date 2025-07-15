//gcd of two numbers
// lcm(a,b)*gcd(a,b)=a*b
#include <iostream>
using namespace std;
int main() {
    int a,b;
   
    cin>>a>>b;
     long long int product =a*b;//long long as int a*int b 10^9 *10^9
     int x=min(a,b);//INBUILT FUNCTION
    // a=4 b=6
    //we will start loop from 1 to lower number
    //and the number which divides both a and b store it in a bucket hcf
    //after loop print hcf
    int i=1;
    int  hcf;
    while(i<=x){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
        i=i+1;
    }
    cout<<hcf;
    

    //to find lcm ,lcm=a*b/gcd;
    long long int lcm=product/hcf;

    // CAN ALSO WRITE LONG LONG INSTEAD OF WRITING LONG LONG INT
   
    return 0;
}