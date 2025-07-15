#include <iostream>
using namespace std;

// print decreasing numbers from n to 1
void printdec1(int n){
    //1.base case
     if(n==0)return;
    //2.recursive case
    cout<<n<<" ";
    printdec1(n-1);
    // pehle print phir call
    // printing at calling time
    // agar pehle call phir print toh increasing numbers
}
void printinc1(int n){
    //1.base case
     if(n==0)return;
    //2.recursive case
  
    printinc1(n-1);
      cout<<n<<" ";
      // this is printing at returning time
   
}
void printincnormal(int n,int i){
    //1.base case
    if(i==n+1){
        return;
    }

    //2.recursive case
    cout<<i<<" ";
    printincnormal(n,i+1);

}

void printdecnormal(int n,int i){
    //1.base case
    if(i==n+1){
        return;
    }

    //2.recursive case
    
    printdecnormal(n,i+1);// just flipped these two lines
    cout<<i<<" ";

}
int main() {
    int n;
    cin>>n;
    printdec1(n);
    cout<<endl;
    printinc1(n);
    cout<<endl;
    printincnormal(n,1);
    cout<<endl;
    printdecnormal(n,1);

    return 0;
}