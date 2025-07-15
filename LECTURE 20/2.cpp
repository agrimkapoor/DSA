// RAT IN A MAZE PROBLEM
#include <iostream>
using namespace std;
bool ratinmaze(char maze[][5],int sol[][4],int m,int n,int i,int j){
//1.base case
if(i==m-1 && j==n-1){// Destination bhi solution ka part hogi
    sol[i][j]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return false;
}
//2.recursive case
    sol[i][j]=1;// JAHA KHADE HO USSE SOLN KA PART ASSUME KARLO

    //TAKE RIGHT STEP
    if(j+1<n && maze[i][j+1]!='X'){
        //PEHLE J+1 WAALI COND LIKHNA WARNA SEGMENTATION FALULT
    // AGAR PEHLE J+1 FALSE TOH  NOT GO IN SECOND CONDITON WARNA SECOND COND ME J+1 PE NULL HO JATA IF FIRST COND FALSE
        if(ratinmaze(maze,sol,m,n,i,j+1)){//chota maze solved

            return true;//return bada maze solved
        }
    }
    //TAKE DOWN STEP
     if(i+1<m && maze[i+1][j]!='X'){
        if(ratinmaze(maze,sol,m,n,i+1,j)){
            return true;
        }
    }   
    sol[i][j]=0;// backtracking
    return false;


}
int main() {
    char maze[][5]={// ek space for null char so no of col=5
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    int sol[4][4]={0};
    // o/p will be stored in solution 2d array
    //isme answer niklega,and by default har bucket pe 0 daal diya
    // assume ki initially no cell is part of the path
    int m=4,n=4;
    // m=no of rows in sol=4
    // n =no of col in sol=4
    ratinmaze(maze,sol,m,n,0,0);
    return 0;
}