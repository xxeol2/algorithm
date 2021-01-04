/*
boj2447.cpp
2021.01.02 정설희
별 찍기 - 10
*/

#include <bits/stdc++.h>
using namespace std;
char arr[2189][2189];
void init() {
	for (int i = 0; i < 2189; ++i) {
		for (int j = 0; j < 2189; ++j) {
			arr[i][j] = ' ';
		}
	}
}
void fun(int y, int x, int n) {
	if (n == 1) {
		arr[y][x] = '*';
		return;
	}
	n /= 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1)
				continue;
			fun(y + n * i, x + n * j, n);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	init();
	fun(0, 0, n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}