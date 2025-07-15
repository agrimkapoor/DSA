//OPERATOR OVERLOADING
#include <iostream>
#include<cstring>
using namespace std;

class Car {
public:
	char name[100];
	int price;
	int model;
	int seats;

	// 1.DEFAULT CONSTRUCTOR
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2.Parameterized Constructor
	Car(char*a, int p, int m, int s) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. COPY ASSIGNMENT OPERATOR
	void operator=(Car X) {
		cout << "Inside Copy Assignment\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 5. Operator Overloading
	bool operator>(Car &X) {
		return price > X.price;

	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}
};

int main() {

	Car A; // A is an Object of Car class
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;
	char bname[100] = "BMW";
	Car B(bname, 150, 2021, 2);

	Car C("Audi", 200, 2024, 4);
	// Copy of an Object
	Car D(C); // Car D = C;

	// Copy Assignment Operator
	D = A;

	A.print();
	B.print();
	C.print();
	D.print();

	if (A > B) {
		cout  << "A is costly\n";
	}
	else {
		cout  << "B is costly\n";
	}
	return 0;
}