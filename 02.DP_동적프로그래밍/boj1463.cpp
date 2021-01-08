/*
boj1463.cpp
2021-01-08
1로 만들기
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> dp;

int f(int n) {
    if (n == 1) return 0;
    if (dp[n] != -1) return dp[n];
    
    int result = f(n - 1) + 1;
    if (!n % 3)
        result = min(result, f(n / 3) + 1);
    if (!n % 2)
        result = min(result, f(n / 2) + 1);
    dp[n] = result;
    return dp[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    dp.resize(n + 1, -1);
    cout << f(n);
}