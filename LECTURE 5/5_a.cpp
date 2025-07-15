//pattern
// *****
// ** **
// *   *
#include <iostream>
using namespace std;
//we have to do first row alag se
// first row me odd number of stars 
// other rows have even number of stars
int main() {
   int n;
   cin >>n;
   int i=1;
   while(i<=2*n-1){
    cout<<"*";
    i++;
   };
   cout<<"\n";

   int row=1;
   while(row<=n-1){
        int i=1;
        while(i<=n-row){
            cout<<"*";
            i=i+1;
        }
        i=1;
        while(i<=2*row-1){
            cout<<' ';
            i=i+1;
        }
        i=1;
        while(i<=n-row){
            i=i+1;
            cout<<"*";
        }

        cout<<'\n';
        
    row=row+1;
   }

    return 0;
}