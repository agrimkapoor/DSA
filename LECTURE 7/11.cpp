// pattern
// * *** *** *
// ** ** ** **
// *** * * ***
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //1.print row times star
        int i=1;
        while(i<=row){
            cout<<"*";
            i++;
        }
        //2.print space only one time in each row
        cout<<" ";
        //3. print n-row+1 stars
        i=1;
        while(i<=n+1-row){
            cout<<"*";
            i++;
        }
        //4.print space one time
         cout<<" ";
         //5.print n-row+1 stars
         i=1;
        while(i<=n+1-row){
            cout<<"*";
            i++;
        }
        //6.print space one time
         cout<<" ";
         //7.print row times star
          i=1;
        while(i<=row){
            cout<<"*";
            i++;
        }


        cout<<endl;
        row++;
    }
    return 0;
}
