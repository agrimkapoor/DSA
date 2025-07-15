//INPUT AND PRINT 2d array
#include <iostream>
using namespace std;
int main() {
    int a[][4]={
        {1,2,3,4},//row 0
        {5,6,7,8},//row 1
        {9,10,11,12}//row 2
    };
    /*
        1   2   3   4
        5   6   7   8
        9   10  11  12
    */
   //NO OF ROWS=3
   //NO OF COLS=4
   //int a[row][col]
  
   // here are 3 1-D arrays each ka size is 4

//    a[0] → [x x x x]  // 4 ints
//    a[1] → [x x x x]  // 4 ints
//    a[2] → [x x x x]  // 4 ints
 //2d array is array of arrays
//a[m][n] dont say there is array of size n where each ele of it is size of m ISKA ULTA HOGA 

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(a[0])/sizeof(int);
    //THIS IS FOR A 2D ARRAY WHERE EACH ROW HAS N ELEMENTS
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // cin>>a[i][j];     //INPUT
            cout<<a[i][j]<<" ";  //OUTPUT
        }
        cout<<endl;
    }
    return 0;
}