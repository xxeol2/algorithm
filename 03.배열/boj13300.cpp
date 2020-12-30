/*
boj13300.cpp
2020.12.30 정설희
방 배정
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	//여 0 남 1
	int arr[7][2] = { 0, };

	for (int i = 0; i < n; i++) {
		int s, y;
		cin >> s >> y;
		arr[y][s]++;
	}
	int count = 0;
	for (int i = 1; i <=6; i++) {
		for (int j = 0; j < 2; j++) {
			count += arr[i][j] / k;
			if (arr[i][j] % k != 0)
				count++;
		}
	}
	cout << count;
}