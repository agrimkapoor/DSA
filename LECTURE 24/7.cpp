// COPY CONSTRUCTOR
// EK OBJECT SE DOOSRE OBJECT KI COPY CREATE KARNE KE LIYE
// CAR X=Y; OR CAR X(Y);
// THIS IS HOW COPY CONSTRUC WILL BE CALLED
// IT IS CALLED BY X
#include <iostream>
#include<cstring>
using namespace std;
class Car {
public:
    //1.data members
    char name[100];
    int price,model,seats;
    //2.functions
    Car(){

    }
    //copy constructor
    Car(Car &Y){
        cout<<"inside copy constructor";
        strcpy(name,Y.name);
        price=Y.price;
        model=Y.model;
        seats=Y.seats;
    }
};
int main() {
    Car A; 
    A.price=100;
    
    strcpy(A.name,"BMW");
    A.model=2025;
    A.seats=5;

    Car B=A;
    return 0;
}