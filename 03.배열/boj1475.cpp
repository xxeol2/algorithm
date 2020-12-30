/*
boj1475.cpp
2020.12.30 정설희
방 번호
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[10] = { 0, };

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - '0']++;
	}
	int tmp = int(ceil((double(arr[6]) + double(arr[9])) / 2.0));
	arr[6] = tmp;
	arr[9] = tmp;

	int maxN = arr[0];
	for (int i = 1; i < 10; i++) {
		maxN = max(maxN, arr[i]);
	}
	cout << maxN;
}