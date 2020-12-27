/*
boj11726.cpp
2020.12.27 정설희
2xn 타일링
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> dp;

int f(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (dp[n] != -1) return dp[n];

	if (n >= 3) {
		dp[n] = (f(n - 1) + f(n - 2))%10007;
	}
	return dp[n];
}

int main() {
	int n = 0;
	cin >> n;
	dp.resize(n + 1, -1);
	cout << f(n);

}