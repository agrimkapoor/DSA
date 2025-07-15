// searching: read a matrix and find a number in it(BY USING BREAK)
#include <iostream>
using namespace std;
int main() {
    int a[][4]={
        {1,2,3,4},{4,5,6,55},{7,8,9,555},{17,18,19,5555}
    },key=6;
    int rows=sizeof(a)/sizeof(a[0]);
    int cols=sizeof(a[0])/sizeof(int );
    int i,j;// declare outside for loop as we have to use it outside
    for( i=0;i<rows;++i){
        for( j=0;j<cols;++j){
            if(a[i][j]==key){
                cout<<"element found at "<<i<<" "<<j<<endl;
               
                break;
            }
        }
        if(j<cols){// break chala(break se loop se bahar aaya)
            break;
        }
    }
    if(i==rows){
        cout<<"element  not found ";
    }
    return 0;
}
