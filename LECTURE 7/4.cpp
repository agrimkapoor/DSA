//CONSTANTS
#include <iostream>
using namespace std;
int main() {
    const float pi=3.142;
    // pi=pi+1;//error aayega on writing this statement
    // constant buckets cant be updated
    //expression must be a modifiable value
    int r = 2;
	cout << 2 * pi * r << endl;

    // const int area;
    // this is wrong
    // value na dene pe garbage store karlega
    // you have to initialise the constt bucket warna error

    // you cant take input inside a constant bucket(cant cin)
    // constt bucket ko create karte samay hi value deni padegi
    
    
// pi=4.14 is wrong 
//pi=pi+1 IS WRONG
// as this expression is not assignable
    
    int x;
    cin>>x;

    const int area=x;// correct
    
    // const int area; 
    // cin>>area;
    // THIS ABOVE IS WRONG
    return 0;
}