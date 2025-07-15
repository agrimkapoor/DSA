//address of operator
#include <iostream>
using namespace std;
int main() {
    int a=10;
    cout<<&a<<endl;//not reference variable

    // &a=&a+1; THIS IS NOT A MODIFIABLE VALUE
    int *x=&a;//0x61ff08
    x=x+1;//0x61ff0c
    // increase 1 means inc by 4 as pointer to integer --->integer takes 4 bytes
    cout<<x<<endl;

    int**y=&x;
    cout<<y<<endl;
    // &x=&x+1; THIS IS NOT A MODIFIABLE VALUE
    y=y+1;
    //HERE Y IS A POINTER TO A INTEGER POINTER
    //ANY POINTER  TAKES 4 OR 8 BYTES DEPENDING ON SYSTEM 
    cout<<y<<endl;
    cout<<sizeof(int)<<endl; //4
    cout<<sizeof(&a)<<endl; //4
    cout<<sizeof(x)<<endl;  //4  :storing 32 bits ka address so 4 bytes
    cout<<sizeof(y)<<endl;  //4  :storing 32 bits ka address so 4 bytes

    float f = 10.11;
    cout << "f : " << f << endl;
	cout << "sizeof(&f) : " << sizeof(&f) << " bytes" << endl;
	cout << "&f : " << &f << endl;
    return 0;
}