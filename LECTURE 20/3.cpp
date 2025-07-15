// SUDOKU SOLVER
#include <iostream>
#include<cmath>
using namespace std;
bool isSafe(int mat[][9],int n,int i,int j,int no){
    // 1.check whole column and whole row
    for(int k=0;k<n;k++){
        if(mat[k][j]==no || mat[i][k]==no){
            return false;
        }
    }
    //2. check that root n cross root n
    //no current 3*3 wale matrix mei nhi hona chahiye
        n=sqrt(n);
        int si=(i/n)*n;
        int sj=(j/n)*n;
        for(int i=si;i<si+n;i++){
            for(int j=sj;j<sj+n;j++){
                if(mat[i][j]==no)return false;
            }
        }

    return true;

}
bool sudokusolver(int mat[][9],int n,int i,int j){
//1.base case
if(i==n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return true;// as only one config in sudoku
    // return false likhoge toh bhi ek hi config
}
//2.recursive case

// Bhai recursive case se pehle 2 cheeze check krna jarrori hai
// j overshoot waali cond pehle likni  before cell alredy filled condn
// 1. Agar j == n ho gaya  toh bhai agli row par jaao and col-->0 par jaao
if(j==n){
   return  sudokusolver(mat,n,i+1,0);
   //another way
        // if(solveHuaBaaki)return true;
        // return false // else waali cond

   //agar recur ka false toh return false as no other j left
}
// 2. Cell empty nhi hai, toh isse fill nahi krna, choti prob mei todd do aur
if(mat[i][j]!=0){
    return sudokusolver(mat,n,i,j+1);
}
// Agar upar ki dono cheeze theek hai toh mtlb mei empty cell par hoon, uska kaam karo

	// Recursive case: Sare Empty Cell Fill krna --> Ek empty cell mei fill kr deta hoon, Baaki rec. krega
// Ek empty cell par hum 1-N tak number fill kr skte h
	// Ek empty cell ka kaam hum krenge baaki recursion ko bolenge
for(int no=1;no<=n;no++){
    if(isSafe(mat,n,i,j,no)){
        mat[i][j]=no;
        if(sudokusolver(mat,n,i,j+1)){
            return true;
        }
        mat[i][j]=0;
    }
    
}
return false;
}
int main() {
    int mat[][9]={
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    sudokusolver(mat,9,0,0);
    return 0;
}