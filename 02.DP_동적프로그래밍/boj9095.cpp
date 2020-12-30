/*
boj9095.cpp
2020.12.27 정설희
1,2,3 더하기
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> dp(11,-1);

int f(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 4;

	if (dp[n] != -1) return dp[n];
	
	if (n >= 4) {
		dp[n] = f(n - 1) + f(n - 2) + f(n - 3);
	}
	return dp[n];
}

int main() {
	int n = 0;
	cin >> n;
	vector <int> result(n);
	for (int i = 0; i < n; i++) {
		int k = 0;
		cin >> k;
		result[i] = f(k);
	}
	for (int i = 0; i < n; i++) {
		cout <<result[i]<<endl;
	}

}