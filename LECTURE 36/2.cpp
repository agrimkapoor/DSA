// MIN STEPS TO REACH FROM N TO 1
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// ek step ham lenge baaki recursion lega
int minsteps(int n){ //T.C =O(3^N)  S.C=O(N)
    //1.base case
    if(n==1)return 0;

    //2.recursive case
     int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
     if(n%2==0)op1=minsteps(n/2);// min steps to reach from n/2 to 1
     if(n%3==0)op2=minsteps(n/3);
     op3=minsteps(n-1);

    return  1+ min(op1,min(op2,op3)) ;// ek step maine liye usse add kar dia
    // min inbuilt fn me sabka datatype same hona chaiye hai
    //min fn can take 2 arguments
}
int topDown(int n ,vector<int>&dp){//T.C=O(N)  S.C=O(N + N)
    //1.base case
    if(n==1)return dp[n]=0;
    //CHECK BEFORE CALCULATE
    if(dp[n]!=-1)return dp[n];
    //2.recursive case
     int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;//agar op1,op2 me 0 daal diya toh jab divisible nhi tab op1,op2 me 0 which will make it min
     if(n%2==0)op1=topDown(n/2,dp);// min steps to reach from n/2 to 1
     if(n%3==0)op2=topDown(n/3,dp);
     op3=topDown(n-1,dp);

    return  dp[n]=1+ min(op1,min(op2,op3)) ;// ek step maine liye usse add kar dia
}
int bottomUp(int n){ //T.C=O(N)  S.C=O(N)
    vector<int>dp(n+1,-1);
    dp[1]=0;//base case ko initialise
    // zero index pe kuch nhi karenge
    for(int i=2;i<=n;i++){
        int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;//ye kaam har dp[i] ke liye karna hoga
        op1=dp[i-1];
        if(n%2==0)op2=dp[i/2];
        if(n%3==0)op3=dp[i/3];
        dp[i]=1 + min(op1,min(op2,op3));
    }
    return dp[n];
}

int main() {
    int n;
    cin>>n;
    cout<<minsteps(n)<<endl;
    vector<int>dp(n+1,-1);// 0th index pe kuch kaam nhi karna
    // dp[n] ke liye nth index chaiye hai  so array of sixe n+1
    cout<<topDown(n,dp)<<endl;
    // for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
    cout<<bottomUp(n)<<endl;
    return 0;
}