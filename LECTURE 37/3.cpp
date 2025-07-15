//MIN COST IN A 2D MATRIX 
#include <iostream>
#include <climits>
using namespace std;
//T.C=O(M*N)
//S.C=O(M*N)
int bottomUp(int a[][10],int m,int n){
    //fill the dp array 
    // to know dp[i][j] : we must know dp[i-1][j] and dp[i][j-1]
    int dp[m][n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 and j==0){
                dp[i][j]=a[i][j];
            }
            else{
                int x=(i-1>=0)?dp[i-1][j] : INT_MAX;
                int y=(j-1>=0)?dp[i][j-1]:  INT_MAX;
                dp[i][j]=min(x,y) + a[i][j];//a[i][j] is cost of that cell  (if i==0 and j==0  min will give INT_MAX aayega)
            }
        }
    }
    return dp[m-1][n-1];
}
int main() {
    int a[10][10] = {
		{1, 1, 5, 2},
		{2, 1, 3, 4},
		{4, 1, 1, 1},
		{3, 6, 7, 1},
	};
    
	cout << bottomUp(a, 4, 4) << endl;
	
    return 0;
}
