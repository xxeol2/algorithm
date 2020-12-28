/*
boj2839.cpp
2020.12.28 정설희
설탕 배달
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

vector <int> dp;

int f(int n) {
	if (dp[n] != -1) return dp[n];
	
	if (n == 5) return 1;
	if (n == 3) return 1;
	
	if (n > 5) {
		if (f(n - 5) != -1)
			dp[n] = f(n - 5) + 1;
		else if (f(n - 3) != -1)
			dp[n] = f(n - 3) + 1;
	}
	return dp[n];
}

int main() {
	int n = 0;
	cin >> n;
	dp.resize(n + 1, -1);
	cout << f(n);
}