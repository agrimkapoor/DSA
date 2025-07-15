//functor
#include <iostream>
using namespace std;

class Person {
public:
	void operator()() {
        //pehla () is for oper overloading
        //doosra () is for passing arg
		cout << "Inside Functor\n";
	}
};


int main() {

	Person p;



	return 0;
}