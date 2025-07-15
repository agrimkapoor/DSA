//DP :DYNAMIC PROGRAMMING : N th fibonacci number
#include <iostream>
#include <vector>
using namespace std;
//RECURSIVE APPROACH:
//TIME COMPLEXITY :  O(2^N)
//SPACE COMPLEXITY : O(N) DUE TO RECURSION STACK
int fibo(int n){
    //1.base case
    if(n==0 or n==1){
        return n;
    }
    //2.recursive case
    return fibo(n-1)+fibo(n-2);
}
//TOP DOWN APPROACH :
// Time Complexity:
// O(n)
// Each value of n from 0 to n is computed only once and stored in dp.

// Space Complexity: 

// O(n) (array) +O(n) (recursion stack) =O(n)
int topDown(int n,vector<int>&dp){//VECTOR ALWAYS PASSED BY REFERENCE WARNA TLE
    //1.base case
    if(n==0 or n==1){
        return dp[n]=n;//STORE BEFORE RETURN
    }
    
    if(dp[n]!=-1)return dp[n];//CHECK BEFORE CALCULATING(CALLING FN AGAIN)//dp[n]=n nhi karna

    //2.recursive case
    return dp[n]=topDown(n-1,dp)+topDown(n-2,dp);//STORE BEFORE RETURN 
}
//BOTTOM UP APPROACH :
//TIME COMPLEXITY : O(N)
//SPACE COMPLEXITY : O(N)
int bottomUp(int n){//mai manually  bharunga dp ka array
    vector<int>dp(n+1,-1);
    // n ki value goes from n to 0
    dp[0]=0;// n==0 is base case
    dp[1]=1;//n==1 is base case
    //FILLING THE DP ARRAY
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    vector<int>dp(n+1,-1);
    cout<<topDown(n,dp)<<endl;
    //PRINTING THE DP ARRAY
    // for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
    cout<<bottomUp(n)<<endl;
    return 0;
}