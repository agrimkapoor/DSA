//KNAPSACK 0-1
#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
//T.C=O(2^N)
//S.C=O(N)
int solve(int *price, int *weight, int capacity, int n) {
	// base case
	if (capacity == 0 || n == 0) {
		return 0;
	}
	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + solve(price, weight, capacity - weight[n - 1], n - 1);
	}
	op2 = 0 + solve(price, weight, capacity, n - 1);
	return max(op1, op2);
}
//T.C=O(N*CAP)
//S.C=O(N*CAP +N)DP ARRAY + REC STACK
int topDown(int *price, int *weight, int capacity, int n, int dp[][100]) {
	// base case
	if (capacity == 0 || n == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) return dp[n][capacity];
	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + topDown(price, weight, capacity - weight[n - 1], n - 1, dp);
	}
	op2 = 0 + topDown(price, weight, capacity, n - 1, dp);
	return dp[n][capacity] = max(op1, op2);
}
//T.C=O(N*CAP)
//S.C=O(N*CAP )
int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1, op2;
			op1 = op2 = INT_MIN;

			if (cap >= wt[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
			}
			op2 = 0 + dp[n - 1][cap];
			dp[n][cap] = max(op1, op2);
		}
	}

	return dp[N][capacity];
}

int main() {

	int price[] = {4, 5, 6, 3};
	int weight[] = {2, 4, 3, 1};

	int n = sizeof(price) / sizeof(int);
	int capacity = 5;

	cout << solve(price, weight, capacity, n) << endl;
	int dp[100][100];
	memset(dp, -1, sizeof dp); 
	cout << topDown(price, weight, capacity, n, dp) << endl;

    cout << bottomUp(price, weight, 4, 5) << endl;

	return 0;
}