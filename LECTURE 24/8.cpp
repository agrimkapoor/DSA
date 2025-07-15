#include <iostream>
#include <cstring>
using namespace std;

/////////////////////////// BLUEPRINT ////////////////////////////
class Car {
public:
  //1.datamembers
        char name[100];
        int price;
        int model;
        int seats;
  //2.functions

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

        // 3.Parameterized Constructor-2
        Car(char*a, int p, int m) {
            cout << "Inside Parameterized Constructor-2\n";
            strcpy(name, a);
            price = p;
            model = m;
            seats = 5;
        }
        //4.COPY CONSTRUCTOR
        
	    Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

        void print() {
            cout << "Name   : " << name << endl;
            cout << "Price  : " << price << endl;
            cout << "Model  : " << model << endl;
            cout << "Seats  : " << seats << endl << endl;
        }
};
/////////////////////////// BLUEPRINT ////////////////////////////


int main() {

	Car A; // A is an Object of Car class (A  IS VARIABLE OF DATATYPE CAR)
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;
	char x[100] = "BMW";
	Car B(x, 150, 2021, 2);

	
	char y[100] = "Audi";
	

	Car C(y, 200, 2024);
    Car D(C);
	A.print();
	B.print();
	C.print();
    D.print();

	return 0;
}















