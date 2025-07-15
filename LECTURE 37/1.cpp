//WINE PROBLEM
#include <iostream>
#include <cstring>//for memset
#include <vector>
using namespace std;
//T.C=O(2^n) S.C=O(N)
int solve(int*wine,int l,int r,int day){
    //base case
    if(l>r)return 0;
    //recursive case
   
    int op1=wine[l]*day + solve(wine,l+1,r,day+1);
    int op2=wine[r]*day + solve(wine,l,r-1,day+1);

    return max(op1,op2);
}
//T.C=O(N^2) EACH COMBN OF L,R IS VISITED ONCE
//S.C=O(N^2 + N) ARRAY +REC STACK
int topDown(int*wine,int l,int r,int day,vector<vector<int>>&dp){
     //base case
     if(l>r)return 0;//return dp[l][r]=0 CAN GIVE ERROR IF L OR R OUT OF INDEX
     //there can be invalid index

     //recursive case
     if(dp[l][r]!=-1)return dp[l][r];
     int op1=wine[l]*day + topDown(wine,l+1,r,day+1,dp);
     int op2=wine[r]*day + topDown(wine,l,r-1,day+1,dp);
 
     return dp[l][r]=max(op1,op2);
}
int topDown2(int *price, int l, int r, int day, int dp[][100]) {
	// base case
	if (l > r)return dp[l][r] = 0;//now there cant be invalid index as 100 ka hi le liya 

	if (dp[l][r] != -1) return dp[l][r];

	// recursive case
	int op1 = price[l] * day + topDown2(price, l + 1, r, day + 1, dp);
	int op2 = price[r] * day + topDown2(price, l, r - 1, day + 1, dp);
	return dp[l][r] = max(op1, op2);
}
//T.C=O(N^2)
//S.C=O(N^2)
int bottomUp(int*wine,int n){
        int dp[n][n]={0};
        for(int l=0;l<n;l++){
            dp[l][l]=n*wine[l];
        }
        for(int l=n-2;l>=0;l--){
            for(int r=l+1;r<n;r++){
                int day=n-(r-l);
                dp[l][r]=max(wine[r]*day + dp[l][r-1],wine[l]*day+dp[l+1][r]);
            }
        }
            for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cout << dp[i][j] << "\t";
            }
            cout << endl;
            }
        return dp[0][n-1];
}
int main() {
    
    int price[]={2,3,5,1,4};
    int n=sizeof(price)/sizeof(int);
    vector<vector<int>>dp(n,vector<int>(n,-1));
    cout<<solve(price,0,n-1,1)<<endl;
    cout<<topDown(price,0,n-1,1,dp)<<endl;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << dp[i][j] << "\t";
        }
        cout << endl;
        }//for l>r index pe -1 hoga as we didnt do dp[l][r]=0 in base case because there could have been out of index error
    
   
    cout<<bottomUp(price,n)<<endl;

     int dp2[100][100];

    memset(dp2, -1, sizeof(dp2));
    cout<<topDown2(price,0,n-1,1,dp2);
    return 0;
}