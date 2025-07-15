//STAIRCASE
#include <iostream>
#include <cstring>
using namespace std;
//T.C=O(K^N)
//S.C=O(N)
int staircase(int n, int k) {
	if (n == 0) return 1;
	if (n < 0) return 0;

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += staircase(n - i, k);
	}
	return ans;
}
//T.C=O(N*K) FOR EACH N THERE IS O(K)WORK
//S.C=O(N+N)
int topDown(int n, int k, int dp[]) {//k is independent of n so 1d dp : k is a constant
	if (n == 0) return dp[n] = 1;
	if (n < 0) return 0;// invalid index so dont do dp[n]=0

	if (dp[n] != -1) return dp[n];

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += topDown(n - i, k, dp);
	}
	return dp[n] = ans;
}
//T.C=O(N*K)
//S.C=O(N)
int bottomUp(int n, int k) {
	int dp[10000];

	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		int ans = 0;

		for (int j = 1; j <= k; ++j)
		{
			if (i - j >= 0)
				ans += dp[i - j];
			else break;
		}

		dp[i] = ans;
	}

	return dp[n];
}
//T.C=O(N)
//S.C=O(N)
int nstairs(int n, int k) {
	int dp[10000];
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{

		dp[i] = 2 * dp[i - 1] - (i - 1 - k >= 0 ? dp[i - 1 - k] : 0);
	}

	return dp[n];
}
// dp[0] = 1
// dp[1] = dp[0] = 1
// dp[2] = dp[1] + dp[0] = 1 + 1 = 2
// dp[3] = dp[2] + dp[1] + dp[0] = 2 + 1 + 1 = 4
// dp[4] = dp[3] + dp[2] + dp[1] = 4 + 2 + 1 = 7
// dp[5] = dp[4] + dp[3] + dp[2] = 7 + 4 + 2 = 13
// dp[6] = dp[5] + dp[4] + dp[3] = 13 + 7 + 4 = 24

//so dp[6]=2*dp[5]- dp[2]
//dp[2]=2*dp[0]



int main() {

	int n, k;
	cin >> n >> k;

	int dp[100000];
	memset(dp, -1, sizeof (dp));

	cout << topDown(n, k, dp) << endl;
	cout << bottomUp(n, k) << endl;
	cout << nstairs(n, k) << endl;
	cout << staircase(n, k) << endl;

	return 0;
}