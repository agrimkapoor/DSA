//TASK TERNARY : largest of three numbers by using ternary operator
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    (a>=b&&a>=c)?cout<<a :( (b>=a && b>=c)?cout<<b :cout <<c) ;
    return 0;
    /*
    (a >= b and a >= c) ?
	cout << a << endl :
	     (b >= a and b >= c) ?
	     cout << b << endl :
	     cout << c << endl ;


    */
}