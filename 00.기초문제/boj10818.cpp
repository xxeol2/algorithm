/*
boj10818.cpp
2020.12.30 정설희
최소, 최대
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int tmp;
	cin >> tmp;
	int maxnum = tmp;
	int minnum = tmp;
	for (int i = 0; i < n-1; i++) {
		cin >> tmp;
		maxnum = max(tmp, maxnum);
		minnum = min(tmp, minnum);
	}
	cout << minnum << " " << maxnum;

}