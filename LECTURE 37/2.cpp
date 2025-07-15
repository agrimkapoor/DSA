//LIS :LONGEST INCREASING SUBSEQUENCE
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//RECURSIVE APPROACH
//T.C=O(2^N)
//S.C=O(N) (Due to recursion stack and temporary vector v)
int lis_len = 0;
vector<int> ans;

void LIS(int *a, int n, vector<int> &v, int lv = INT_MAX) {
	// base case
	if (n == 0) {
		if (v.size() > lis_len) {
			lis_len = v.size();
			ans = v;
		}
		return;
	}
	// recursive case
	// 1. Include
	if (a[n - 1] < lv) {
		v.push_back(a[n - 1]);
		LIS(a, n - 1, v, a[n - 1]);
		v.pop_back(); // Backtracking
	}
	// 2. Exclude
	LIS(a, n - 1, v, lv);
}

void printLis(int*a,int n,int*dp,int len,vector<int>&x,int lv=INT_MAX){//T.C=O(2^N)  S.C=O(N)
    //1.base case
    if(n==0 and len==0){//these parameters are changing
        for(int i=x.size()-1;i>=0;i--){
            cout<<x[i]<<" ";
        }
        cout<<endl;
        return;//ye likhna zaroori hai
    }
    //2.recursive case
        //1.include
        if(dp[n-1]==len and a[n-1]<lv){
            x.push_back(a[n-1]);
            printLis(a,n-1,dp,len-1,x,a[n-1]);
            x.pop_back();
        }
        //2.exclude
        printLis(a,n-1,dp,len,x,lv);
}
//M2 :BOTTOM UP APPROACH (NOT FROM PRINTING LIS)
//T.C=O(N^2) for filling the dp[] array
//S.C=O(N) 
int lis2(int*a,int n){
    int dp[n];
    //initialising dp array with 1
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    //filling of dp array
    for(int j=1;j<n;j++){
        for(int k=j-1;k>=0;k--){
            if(a[j]>a[k]){//strictly increasing
                dp[j]=max(dp[j],dp[k]+1);
            }
        }
    }
    //find max ele in dp array : that is length of lis
    int mx=0;
    for(int i=0;i<n;i++){
        if(dp[i]>mx){
            mx=dp[i];
        }
    }
    //printing all the LIS (woh saare jinki length max hai)
    vector<int>x;//to store the lis
    printLis(a,n,dp,mx,x);

}
int main(){
    int a[]={10, 9, 3, 5, 4, 11, 7, 8};
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    LIS(a,n,v);
    cout << "LIS: " << lis_len << endl;
	for (int i = ans.size() - 1; i >= 0; --i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

    cout << lis2(a, n) << endl;
}
