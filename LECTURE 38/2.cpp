//EDIT DISTANCE
#include <iostream>
#include <vector>
using namespace std;
//T.C=O(M*N)
//S.C=O(M*N +(M+N))
int solve(string s1,string s2,int m,int n,vector<vector<int>>&dp){
    //base case
    if(m==0)return dp[m][n]=n;
    if(n==0)return dp[m][n]=m;
    //recursive case
    if(dp[m][n]!=-1)return dp[m][n];
    if(s1[m-1]==s2[n-1]){
        return dp[m][n]=solve(s1,s2,m-1,n-1,dp);
    }
    else{
        return     dp[m][n]=      min(
		                      solve(s1,  s2, m,n-1,dp),
		                      min(
		                         solve(s1, s2, m - 1,n,dp),
		                          solve(s1,  s2, m - 1,n-1,dp) 
		                      )
		                  ) + 1;
    }
}
int main() {
    string s1 = "dalda", s2 = "ladla";
	vector<vector<int>>dp(s1.size() + 1,vector<int>(s2.size() +1,-1));
	
	cout << solve(s1,  s2,s1.size(), s2.size(), dp) << endl;
    return 0;
}