/*
boj1931.cpp
2021-01-08 정설희
회의실 배정
*/

#include <bits/stdc++.h>
#define MAX 2'147'483'647
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector <pair<int, int>> vec;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int t1, t2; cin >> t1 >> t2;
        vec.push_back({ t1,t2 });
    }

    sort(vec.begin(), vec.end(),cmp);
    int cnt = 1;
    int now = vec[0].second;
    for (int i = 1; i < n; i++) {
        if (vec[i].first >= now) {
            cnt++;
            now = vec[i].second;
        }
    }
    
    cout << cnt;
  
}