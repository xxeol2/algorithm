/*
boj2294.cpp
2021-01-08
동전 2
*/

#include <bits/stdc++.h>
#define MAX 10'001
using namespace std;
vector<int> money;
vector<int> dp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    dp.resize(k + 1, MAX);
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        money.push_back(tmp);
    }
    sort(money.begin(), money.end());

    for (int i = 0; i<n; i++) {
        for (int j = money[i]; j <= k; j++) {
            dp[j] = min(dp[j - money[i]] + 1, dp[j]);
        }
    }
    if (dp[k] == MAX)
        cout << -1;
    else
        cout << dp[k];
}