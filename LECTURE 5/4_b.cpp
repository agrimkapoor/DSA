//PRINT ALL PRIMES BETWEEN 2 TO N  (by using break)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int no=2;no<=n;no++){
        //check if no is prime or not
        int i;//WE HAVE TO USE OUT OF THE FOR LOOP
        for( i=2;i<=no-1;i++){
            if(no%i==0){break;}
        }
        if(i==no){
        cout<<no <<" is prime "<<endl;
        }
    }
    return 0;
}