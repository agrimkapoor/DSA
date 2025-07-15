// PARAMETERISED CONSTRUCTOR
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

        //PARAMETERISED CONSTRUCTOR FN
        Car(char*n,int p,int m,int s){
         cout<<"inside parameterised constructor\n";  
         strcpy(name, n);//A.name nhi
         // name=n is wrong
         price=p;
         model=m;
         seats=s;
        }
        
    };

int main() {
    Car A; // gets created by default construc
    A.price=100;
    strcpy(A.name,"BMW");
    A.model=2025;
    A.seats=5;
    // Car B("AUDI",50,2024,4);//gets created by parameterised construc
    // arg is char* and par is "AUDI" SO THIS IS WRONG
    char x[]="AUDI";
    Car B(x,50,2024,4);
    B.price=100;//UPDATION
    strcpy(B.name,"alto");//UPDATION
    return 0;
}