// n queen problem
#include <iostream>
using namespace std;
bool isSafe(int board[][10],int n,int i,int j){
    //1. check ki upper col me queen nahi hai
   for(int r=0;r<i;r++){
    if(board[r][j])return false;
   }
   int copy_i=i,copy_j=j;
   //2 check in upper left diagonal
   while(i>=0 && j>=0){
    if(board[i--][j--])return false;
   }
   i=copy_i,j=copy_j;
   // 3 check in upper right diagonal
   while(i>=0 && j<n){
    if(board[i--][j++])return false;
   }
   // ab rakhna safe hai
   return true;
}
bool Nqueen(int board[][10],int n,int i){
    // we can skip row size in ini and arg
    //1.base case

    if(i==n){// saari raani place hogayi
        // print the board
        for(int i=0;i<n;i++){// this i is of for ka scope and diff from arg
            for(int j=0;j<n;j++){
                (board[i][j])?cout<<"Q":cout<<"_";
            }
            cout<<endl;
        }
        cout<<endl;// separating the multiple config
        return false;
        // return true to print one config instead of return false
    }
    //2.recursive case
    for(int j=0;j<n;j++){
     if(isSafe(board,n,i,j)){// Pehle check karo i,jsafe hai queen rakhne ke liye
        board[i][j]=1;	// If safe hai toh rakho

       if( Nqueen(board,n,i+1) ){// Recursion ko bolo n-1 queens ko place karne ko
            // choti prob ka ans true 

           return true;// badi prob ka ans bhi true return kardo
       }
               //choti prob ka ans false aagaya toh place queen on next j
       board[i][j]=0;// yaha se queen ko hatao(backtracking)
       //ab agle j pe rakhenge
     }
    }
    // Loop ke bahar aa gaye, mtlb kisi bhi column par raani nhi rakh paye in that row
    return false;
}
int main() {
    int n;
    cin>>n;
    // board ki har value ko zero kardo (no queen initially)
    int board[10][10]={0};// iss waali ini we cant skip row size
    // as pta hi nhi kitni rows me 0

    // func in 2d array:
    // jo size in main fn woh hi in arg
    // if we skip row size in any one toh doosre waale me kuch bhi ho sakta hai row size
    
     // this  main fn ka 2d array and arg me same column size
    // arg me row size nhi hai toh kuch bhi ho sakta row size hai main fn waala 2d array me
    Nqueen(board,n,0);
    // we have just have to call
    // hamne print kar liya tha
    return 0;
}