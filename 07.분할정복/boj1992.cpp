/*
boj1992.cpp
2021.01.02 정설희
쿼드트리
*/
//괄호를 어케 넣지..
#include <bits/stdc++.h>
using namespace std;
int arr[66][66];

void dnc(int y, int x, int n) {
	if (n == 1) {
		cout << arr[y][x];
		return;
	}
	bool zero = true;
	bool one = true;
	for (int i = y; i < y+n; i++) {
		for (int j = x; j < x+n; j++) {
			if (arr[i][j])
				zero = false;
			else
				one = false;
		}
	}
	if (zero)
		cout << 0;
	else if (one)
		cout << 1;
	else {	//하나라도 다르면
		n /= 2;
		cout << '(';
		dnc(y, x, n);
		dnc(y, x + n, n);
		dnc(y + n, x, n);
		dnc(y + n, x + n, n);
		cout << ')';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < n; j++) {
			arr[i][j] = s[j] - '0';
		}
	}
	dnc(0,0,n);

}