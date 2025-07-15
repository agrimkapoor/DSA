// CONSTANT AND STATIC DATA MEMBERS
#include <iostream>
#include<cstring>
using namespace std;

/////////////////////////// BLUEPRINT ////////////////////////////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	int seats;
	static int count;
	const int tyres;

	// 1.DEFAULT CONSTRUCTOR
	Car(): tyres(4), name(NULL) {
		// name = NULL;
		cout << "Inside Default Constructor\n";
		count++;
	}

	// 2.Parameterized Constructor
	Car(char*a, int p, int m, int s): tyres(4), price(p), model(m), seats(s) {
		cout << "Inside Parameterized Constructor\n";
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		// price = p;
		// model = m;
		// seats = s;
		count++;
	}

	// 3. Copy Constructor
	Car(const Car &X): tyres(4) {
		cout << "Inside Copy Constructor\n";
		// name = new char[strlen(X.name) + 1]; //THIS WOULD HAVE BEEN DEEP COPY
		// strcpy(name, X.name);
		name = X.name;
		price = X.price;
		model = X.model;
		seats = X.seats;
		count++;
	}

	// Copy Assignment Operator
	void operator=(const Car &X) {
		cout << "Inside Copy Assignment\n";
		if (name != NULL) { // Agar name kisi valid memory ko point kar raha hai
			// toh we need to free that memory
			delete []name;
		}
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}


	~Car() {
		count--;
		cout << "Deleting Object " << name << endl;
		// delete[]name;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	void setName(char*n) {
		if (name != NULL) { // Agar name kisi valid memory ko point kar raha hai
			// toh we need to free that memory
			delete []name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	void setPrice(int p) {
		if (p > 100 and p < 150)
			price = p;
		else price = 120;
	}

	int getPrice() {
		return price;
	}
};
/////////////////////////// BLUEPRINT ////////////////////////////

int Car::count = 0;//DECLARATION



int main() {

	Car A; // A is an Object of Car class
	// strcpy(A.name, "Maruti");
	// Setter
	char y[]="Maruti";
	A.setName(y);
	// A.price = -100;
	// Getter and Setter
	A.setPrice(-150);
	cout << A.getPrice() << endl;
	A.model = 2020;
	A.seats = 4;
	char x[]="BMW";
	Car B(x, 150, 2021, 2);

	Car C =  A;
	Car D = C;

	D.name[0] = 'T';
	cout << "Total Cars : " << Car::count << endl;

	A.print();
	B.print();
	C.print();
	D.print();
	cout << "Total Cars : " << A.count << endl;
	return 0;
}