/*
boj2493.cpp
2021.01.01 정설희
탑
*/

#include <bits/stdc++.h>
#define MAX 500'0001
using namespace std;
stack <int> tower;
stack <pair<int,int>> s; //<값,순서>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;


	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		while (!s.empty()) {
			if (s.top().second > k) {
				cout << s.top().first << " "; break;
			}
			s.pop();
		}
		if (s.empty()) cout << 0 << " ";
		s.push({ i,k });
	}
}