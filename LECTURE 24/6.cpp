// we can make more than one parameterised fn
#include <iostream>
#include <cstring>
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
        //PARAMETERISED CONSTRUCTOR FN 2
        Car(char*n,int p,int m){
         cout<<"inside parameterised constructor 2\n";  
         strcpy(name, n);//A.name nhi
         // name=n is wrong
         price=p;
         model=m;
         seats=5;
        }
        
    };
int main() {
    char x[]="BMW";
    Car A(x,50,2024,4);
    char y[]="AUDI";
    Car B(y,50,2024);
    return 0;
}