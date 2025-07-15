// DEFAULT FUNCTIONS :yeh already exist karte hain
// hum inme kuch features add kar sakte hai
//1.CONSTRUCTOR 
#include <iostream>
#include<cstring>
using namespace std;
 class Car{
    public: 
        //1.data members
        char name[100];
        int price,model,seats;

        //DEFAULT CONSTRUCTOR FN
        Car(){
         cout<<"inside default constructor\n";   
        }
        
    };

int main() {
    Car A; // gets created by default construc
    // cout waali statement print hojayegi
    A.price=100;
    strcpy(A.name,"BMW");
    A.model=2025;
    A.seats=5;
    Car B; //gets created
    return 0;
}