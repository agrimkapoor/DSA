#include <iostream>
#include <cstring>
using namespace std;
    class Car{
    public: 
        char name[100];
        int price,model,seats;
    };
int main() {
    Car A; 
    A.price=100;
    
    //Arrays in C++ cannot be assigned like that after declaration.
    // int a[100];
    // a = {1, 2, 3, 4};  // ❌ Invalid

    //A.name="BMW";
    strcpy(A.name,"BMW");
    A.model=2025;
    A.seats=5;

    cout<<"NAME:  "<<A.name  <<endl;
    cout<<"PRICE: "<<A.price<<endl;
    cout<<"MODEL: "<<A.model<<endl;
    cout<<"SEATS: "<<A.seats<<endl<<endl;

    // lets create another object
    Car B; 
    B.price=200;
    strcpy(B.name,"AUDI");
    B.model=2026;
    B.seats=6;

    cout<<"NAME:  "<<B.name  <<endl;
    cout<<"PRICE: "<<B.price<<endl;
    cout<<"MODEL: "<<B.model<<endl;
    cout<<"SEATS: "<<B.seats<<endl;

   // agar 100 cars toh 100 baar print
   // so make a fn for print
   // class me fn bhi ho sakte hai 
    return 0;
}