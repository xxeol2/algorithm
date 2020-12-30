/*
boj11057.cpp
2020.12.28 정설희
오르막수
*/
#define CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h> 
#define MOD 10'007

int main() {
	int dp[1001][10] = { 0, };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}
	if (n >= 2) {
		for (int i = 2; i <= n; i++) {
			for (int j = 0; j <= 9; j++) {
				for (int k = 0; k <= j; k++) {
					dp[i][j] += dp[i - 1][k];
					dp[i][j] %= MOD;
				}
			}
		}
	}

	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum += dp[n][i];
		sum %= MOD;
	}
	printf("%d", sum);

	
}