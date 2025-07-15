#include <iostream>
#include<cstring>
using namespace std;
  
    class Car{
    public: 
        //1.data members
        char name[100];
        int price,model,seats;
        //2.functions
        void print(){
            cout<<"NAME:  "<<name  <<endl;//A.name nhi
            cout<<"PRICE: "<<price<<endl;
            cout<<"MODEL: "<<model<<endl;
            cout<<"SEATS: "<<seats<<endl<<endl;
        }
    };
int main() {
    Car A; 
    A.price=100;
    strcpy(A.name,"BMW");
    A.model=2025;
    A.seats=5;

    A.print();

    Car B; 
    B.price=200;
    strcpy(B.name,"AUDI");
    B.model=2026;
    B.seats=6;
    
    B.print();
    return 0;
}