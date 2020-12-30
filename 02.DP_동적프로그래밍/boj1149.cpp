/*
boj1149.cpp
2020.12.29 정설희
RGB거리
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define MAX 1'001
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	int cost[MAX][3];
	int dp[MAX][3];

	for (int i = 1; i <= n; i++)
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

	dp[1][0] = cost[1][0];
	dp[1][1] = cost[1][1];
	dp[1][2] = cost[1][2];

	for (int i = 2; i <= n; i++) {
		dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}

	int result = min(dp[n][0], dp[n][1]);
	result = min(result, dp[n][2]);
	cout << result;
}