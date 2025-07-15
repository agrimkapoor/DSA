//MIN COINS EXCHANGE
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
//T.C=O(N^AMNT) THERE ARE BREAKING IN TO  N CALLS AND DEPTH OF STACK IS AMNT
//S.C=O(AMNT) DEPTH OF  RECURSION STACK
int solve(int amount ,int*deno,int n){
    //1.base case
    if(amount==0)return 0;//we need to bring amt to 0
    //2.recursive case

        //iterate on the deno array
        int ans=INT_MAX;//INITIALISE IT OUTSIDE THE LOOP KYUKI INITIALLY IT IS INFINITY
        for(int i=0;i<n;i++){
            if(amount>=deno[i]){//DONT MISS THIS COND
                int chotiamount=amount - deno[i];
                int x=solve(chotiamount,deno,n);// x is the answer of choti prob by rec 
                if(x!=INT_MAX)ans=min(ans,x+1);//agar x int max hai then dont have to update ans as x min nhi ho sakta
            }
        }
        return ans;
}
//T.C=O(N*AMNT)  FOR EACH AMNT THERE IS O(N) WORK
//S.C=O(AMNT + AMNT)
int topDown(int amount ,int*deno,int n,vector<int>&dp){
    //1.base case
    if(amount==0)return dp[amount]=0;//we need to bring amt to 0

    if(dp[amount]!=-1)return dp[amount];//check before calculate
    //2.recursive case

        //iterate on the deno array
        int ans=INT_MAX;//INITIALISE IT OUTSIDE THE LOOP KYUKI INITIALLY IT IS INFINITY
        for(int i=0;i<n;i++){
            if(amount>=deno[i]){//DONT MISS THIS COND
            int chotiamount=amount - deno[i];
            int x=topDown(chotiamount,deno,n,dp);// x is the answer of choti prob by rec 
            if(x!=INT_MAX)ans=min(ans,x+1);
            }
        }
        return dp[amount]=ans;
}

//T.C=O(AMNT * N)  S.C=O(AMNT)
int bottomup(int amount ,int *deno ,int n){
    vector<int>dp(amount+1,INT_MAX);//isse initialise karna hoga
    dp[0]=0;
    for(int rupay=1;rupay<=amount;rupay++){

         //find dp[rupay]
        for(int i=0;i<n;i++){
            if(rupay>=deno[i]){//DONT MISS THIS COND
            int chotirupay=rupay - deno[i];
            int x=dp[chotirupay];// x is the answer of choti prob by rec 
            if(x!=INT_MAX)dp[rupay]=min(dp[rupay],x+1);
            }
        }
       
    }
    
    for (int i = 0; i <= amount; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
    return dp[amount];
    //if amnt less than all coins then loops me nhi jaayega ans=int _max hi returned
}
int bottomup2(int amount ,int deno[] ,int n){
    vector<int>dp(amount+1,-1);
    dp[0]=0;
    for(int rupay=1;rupay<=amount;rupay++){
         //find dp[rupay]
        dp[rupay]=INT_MAX;
        for(int i=0;i<n;i++){
            if(rupay>=deno[i]){//DONT MISS THIS COND
            int chotirupay=rupay - deno[i];
            int x=dp[chotirupay];// x is the answer of choti prob by rec 
            if(x!=INT_MAX)dp[rupay]=min(dp[rupay],x+1);
            }
        }
       
    }
    for (int i = 0; i <= amount; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
    return dp[amount];
    //if amnt less than all coins then loops me nhi jaayega ans=int _max hi returned
}

int main() {
    int amount;
    cin>>amount;
    int coins[]={1,7,10};
    int n=sizeof(coins)/sizeof(int);
    cout<<solve(amount ,coins,n)<<endl;
    vector<int>dp(amount+1,-1);
    cout<<topDown(amount ,coins,n,dp)<<endl;
    cout<<bottomup2(amount,coins,n);
    
    return 0;
}