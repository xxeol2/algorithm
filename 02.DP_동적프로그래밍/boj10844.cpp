/*
boj10844.cpp
2020.12.27 정설희
쉬운 계단 수
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int dp[101][11] = { 0, };
	int n = 0;
	scanf("%d", &n);
	dp[1][0] = 0;
	dp[1][10] = 0;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}

	if (n >= 2) {
		for (int i = 2; i <= n; i++) {
			dp[i][0] = dp[i - 1][1];
			dp[i][10] = 0;
			for (int j = 1; j < 10; j++) {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
		sum %= 1000000000;
	}
	printf("%d", sum);
}