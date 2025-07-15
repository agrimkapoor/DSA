// EXPLICIT TYPECASTING (IMPORTANT)
#include <iostream>
using namespace std;
int main() {
    
    cout<< 3/5<<endl;
    cout<< (float)3/5<<endl;
    cout<< (float)4*3/5<<endl;
    cout<< (float)4*(3/5)<<endl;//float will not be applied on (3/5)
    // BRACKET AAYEGA ON 3/5 TOH USPE NHI LAGEGA TYPECAST
    cout<< 4*(float)3/5<<endl;//now float will  be applied on (3/5)
    cout<< (float)5*2*4/3<<endl;//now float will be applied on the whole expression
     cout<< 4*(float)(3/5)<<endl;// bracket ke andar nhi hoga float  3/5 pehle int/int solve hoke aayega
     cout << (int)'A' << endl;

    return 0;
}