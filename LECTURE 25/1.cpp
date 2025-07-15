//COPY ASSIGNMENT OPERATOR
#include <iostream>
#include <cstring>
using namespace std;
class Car{
public:
    //1.DATA MEMBERS
    char name[100];
    int price,model,seats;
    //2.DEFAULT FUNCTIONS
        //1.CONSTRUCTOR
        //1.1 DEFAULT CONSTRUCTOR
        Car(){
            cout<<"INSIDE DEFAULT CONSTRUCTOR\n";
        }
        //1.2 PARAMETERISED CONSTRUCTOR
        Car(char *n,int p,int m,int s){
            cout<<"INSIDE PARAMETERISED CONSTRUCTOR\n";
            strcpy(name,n);
            price=p;
            model=m;
            seats=s;
        }
         //2.COPY CONSTRUCTOR
        Car(Car&Y){
            cout<<"INSIDE COPY CONSTRUCTOR\n";
            strcpy(name,Y.name);
            price=Y.price;
            model=Y.model;
            seats=Y.seats;
        }
         //3.COPY ASSIGNMENT OPERATOR
            //shallow copy hoga :
            // ❌ Pointer copied, both point to same memory
        	// ✅ Value copied, independent memory
        void operator=(Car Y){
              cout<<"INSIDE COPY ASSIGNMENT CONSTRUCTOR\n";
              strcpy(name,Y.name);
              price=Y.price;
              model=Y.model;
              seats=Y.seats;
        }
        //4.DESTRUCTOR
        ~Car(){
             cout<< "Deleting Object " << name << endl;
        }
        //5.GETTER AND SETTER
        void setPrice(int p){
            if(p>100 and p<150){
                price=p;
            }
            else{

            }
        }
        int getprice(){
            return price;
        }
        //FUNCTIONS
        void print(){
            cout<<name<<endl;
            cout<<price<<endl;
            cout<<model<<endl;
            cout<<seats<<endl<<endl;

        }




};
int main() {
    Car A;
    strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

    char x[]="bmw";
    Car B(x,50,2024,6);
    Car C=A;
    Car D;
    D=A;
    //SEE THE ORDER OF COUT STATEMENTS TO SEE WHICH FN IS CALLED FIRST
    A.print();
	B.print();
	C.print();
	D.print();
    //JIS ORDER MEI OBJECTS CREATE USKE ULTER ORDER MEI DESTRUCT
    return 0;
}