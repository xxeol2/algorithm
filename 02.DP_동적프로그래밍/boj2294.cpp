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

int f(int k) {
    if (dp[k] != -1) return dp[k];
    int cnt = MAX;
    if (k < money[0]) return -1;

    for (int i = money.size() - 1; i >= 0; i--) {
        if (k == money[i]) {
            cnt = 1; break;
        }
        if (k - money[i] >= money[0]) {
            cnt = min(cnt, f(k - money[i]) + 1);
        }
    }
    dp[k] = cnt;
    return dp[k];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    dp.resize(k + 1, -1);

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        money.push_back(tmp);
    }

    sort(money.begin(), money.end());

    int ans = f(k);

    if (ans != MAX) //이 조건 없으면 틀림
        cout << ans;
    else
        cout << -1;
}