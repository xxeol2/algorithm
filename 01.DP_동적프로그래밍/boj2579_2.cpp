/*
boj2579_2.cpp
2020.12.28 정설희
계단 오르기 sol2.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int dp[301], score[301];
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> score[i]; //계단 점수 입력
		sum += score[i];
	}
	dp[1] = score[1];
	dp[2] = score[2];
	dp[3] = score[3];
	dp[4] = score[4] + min(dp[1], dp[2]);
	for (int i = 4; i <= n - 1; i++) {
		dp[i] = score[i] + min(dp[i - 3], dp[i - 2]);
	}
	dp[n] = min(dp[n - 1], dp[n - 2]);
	cout << sum - dp[n];
}