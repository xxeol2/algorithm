/*
boj1912.cpp
2020.12.29 정설희
연속합
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define MAX 100'001
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	int num[MAX] = { 0, };
	int dp[MAX] = { 0, };
	fill_n(dp, MAX, -1);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	dp[0] = num[0];
	int recent = 0;
	if (dp[0] >= 0)
		recent = dp[0];

	for (int i = 1; i < n; i++) {
		recent += num[i];
		dp[i] = max(recent, dp[i - 1]);

		if (recent < 0)
			recent = 0;
	}

	cout << dp[n - 1];
}