//CALL BY ADDRESS : IT IS A LITTLE DIFF FROM CALL BY VALUE AND CALL BY REF
#include <iostream>
using namespace std;
void update (int *x){// call by reference using pointers  (THIS IS ACTUALLY CALL BY ADDRESS)
// BUT ISME ALAG VARIABLE BANEGA SO LIKE CALL BY VALUE
// BUT MAIN FN ME BHI CHANGE HO JAYEGA SO LIKE CALL BY REF
    *x=*x+1;
}
void updateref(int&x){
    x=x+1;
}
int main() {
    int a=10;
    cout<<a<<endl;
    update(&a);// call by address
    updateref(a);//call by reference
    return 0;
}