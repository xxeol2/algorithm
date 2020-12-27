/*
boj1463.cpp
2020.12.27 정설희
1로 만들기 // TOPDOWN
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 1000001;

vector<int> dp;

int f(int n) {
	if (n == 1) return 0;
	if (dp[n] != -1) return dp[n];

	int result = f(n - 1) + 1;
	if (n % 3 == 0)
		result = min(result, f(n / 3) + 1);
	if (n % 2 == 0)
		result = min(result, f(n / 2) + 1);
	dp[n] = result;
	return dp[n];
}

int main() {
	int n = 0;
	cin >> n;
	dp.resize(n + 1, -1);
	cout << f(n);
}
