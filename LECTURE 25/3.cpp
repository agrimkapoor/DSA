//DMA IN OOPS
#include <iostream>
#include <cstring>
using namespace std;
class Car{
public:
    //1.DATA MEMBERS
    char *name;
    int price,model,seats;
    //2.DEFAULT FUNCTIONS
        //1.CONSTRUCTOR
        //1.1 DEFAULT CONSTRUCTOR
        Car(){
            cout<<"INSIDE DEFAULT CONSTRUCTOR\n";
            name=NULL;
        }
        //1.2 PARAMETERISED CONSTRUCTOR
        Car(char *n,int p,int m,int s){
            cout<<"INSIDE PARAMETERISED CONSTRUCTOR\n";
            name=new char[strlen(n)+1];
            strcpy(name,n);
            price=p;
            model=m;
            seats=s;
        }
        //2.COPY CONSTRUCTOR
        Car(Car&Y){
            cout<<"INSIDE COPY CONSTRUCTOR\n";
            name=new char[strlen(Y.name)+1];
            strcpy(name,Y.name);//Y.name ko copy kardo in name
            price=Y.price;
            model=Y.model;
            seats=Y.seats;
        }
         //3.COPY ASSIGNMENT OPERATOR
        void operator=(Car Y){
              cout<<"INSIDE COPY ASSIGNMENT CONSTRUCTOR\n";
              if(name!=NULL){
                delete[]name;
              }
              name=new char[strlen(Y.name)+1];
              strcpy(name,Y.name);
              price=Y.price;
              model=Y.model;
              seats=Y.seats;
        }
        //4.DESTRUCTOR
            ~Car() {
            cout << "Deleting Object " << name << endl;
            delete[]name;
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

};
int main() {
    Car A; // A is an Object of Car class
	// strcpy(A.name, "Maruti");
	// Setter
	A.setName("Maruti");
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
    return 0;
} 