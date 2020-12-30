/*
boj2579.cpp
2020.12.28 정설희
계단 오르기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int dp[301], score[301];
	for (int i = 1; i <= n; i++) {
		cin >> score[i]; //계단 점수 입력
	}
	dp[1] = score[1];
	dp[2] = score[1] + score[2];
	dp[3] = max(score[1] + score[3], score[2] + score[3]);
	dp[4] = max(dp[2] + score[4], dp[1]+score[3]+score[4]);
	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
	}
	cout << dp[n];
}