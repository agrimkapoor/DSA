//LCS : LONGEST COMMON SUBSEQUENCE
#include <iostream>
#include <vector>
using namespace std;
//Recursive approach
//T.C=O(2^MIN(M,N))
//S.C=O(M+N) MAX DEPTH 
int LCS(string s1,string s2,int m,int n){
    //1.base case
    if(n==0 or m==0)return 0;
    //2.recursive case
    if(s1[m-1]==s2[n-1]){
        return 1+ LCS(s1,s2,m-1,n-1);
    }
    else{
        return max(LCS(s1,s2,m,n-1),LCS(s1,s2,m-1,n));
    }
}
//Top down approach
//T.C=O(M*N)
//S.C=O(M*N +(M+N))//ARRAY + REC STACK
int topDown(string s1,string s2,int m,int n,vector<vector<int>>&dp){
    //1.base case
    if(n==0 or m==0)return dp[m][n]=0;
    //2.recursive case
    if(dp[m][n]!=-1)return dp[m][n];

    if(s1[m-1]==s2[n-1]){
        return dp[m][n]=1 + topDown(s1,s2,m-1,n-1,dp);
    }
    else{
        return dp[m][n]=max(topDown(s1,s2,m,n-1,dp),topDown(s1,s2,m-1,n,dp));
    }
}
//T.C=O(M*N)
//S.C=O(M*N)
int bottomUp(string s1,string s2,int m,int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 or j==0)dp[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            //fill dp[i][j]
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
    }
    return dp[m][n];
}


void printLCS(string s1,int m,string s2,int n,vector<vector<int>>&dp,string ans){//pass ans by value
   // base case
	if (n == 0 or m == 0) {
		// print the answer
		cout << ans << endl;
		return;
	}
	// recursion case
	if (s1[m - 1] == s2[n - 1]) {
		printLCS(s1, m- 1, s2, n - 1, dp, s1[m - 1] + ans);//we passed ans by value (can do s1[n-1] + ans)
	}//jab ye call hoke waapis aaya toh ab ans me s1[m-1] nhi hai kyuki call by value
	else {
		if (dp[m- 1][n] == dp[m][n]) {
			printLCS(s1, m - 1, s2, n, dp, ans);
		}
		if (dp[m][n - 1] == dp[m][n]) {
			printLCS(s1, m, s2, n - 1, dp, ans);
		}
	}
}
int main() {
    string s1 = "abcde", s2 = "abdce";
    int m = s1.size(), n = s2.size();

    // Recursive
    cout << "Recursive: " << LCS(s1, s2, m, n) << endl;

    // Top-down
    vector<vector<int>> dpTD(m + 1, vector<int>(n + 1, -1));
    cout << "Top Down: " << topDown(s1, s2, m, n, dpTD) << endl;

    // Bottom-up
    int lcsLen = bottomUp(s1, s2, m, n);
    cout << "Bottom Up: " << lcsLen << endl;

    // For printing LCS, we must build dp again using bottom-up (or reuse the one we filled above)
    vector<vector<int>> dpBU(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            dpBU[i][j] = (s1[i - 1] == s2[j - 1]) ? 1 + dpBU[i - 1][j - 1] : max(dpBU[i - 1][j], dpBU[i][j - 1]);

    cout << "LCS Strings: " << endl;
    printLCS(s1, m, s2, n, dpBU, "");

    return 0;
}
