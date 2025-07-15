//INTEGER TO STRING 
// PART 1 : 2048 TO TWO ZERO FOUR EIGHT
// PART 2 :2048 TO EIGHT FOUR ZERO TWO
#include <iostream>
using namespace std;
// global 2d array
char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 // 2d array to store multiple strings
 void convert1(int n){//PART 2
    //1.base case
    if(n==0)return ;
    //2.recursive case
     int ld=n%10;
     cout<<a[ld]<<" ";// ld waali row // char ka address till null
     convert1(n/10);
 }
 void convert2(int n){//PART 1
    //1.base case
    if(n==0)return ;
    //2.recursive case
     int ld=n%10;
     convert2(n/10);
     cout<<a[ld]<<" ";
     // flip these two lines
     
 }
int main() {
    int n;
    cin>>n;
    convert1(n);
    cout<<endl;
    convert2(n);
    return 0;
}