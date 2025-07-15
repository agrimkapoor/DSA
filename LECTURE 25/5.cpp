// THIS KEYWORD :pointer to object
#include <iostream>
#include<cstring>
using namespace std;

class Car {
public:
	char name[100];
	int price;

	Car(char name[], int price) {
		strcpy(this->name, name);
		this->price = price;
	}

	void print() {
		cout << "Name   : " << this->name << endl;
		cout << "Price  : " << this->price << endl;
	}
};

int main() {

	Car A("BMW", 100);
	A.print();

	return 0;
}















