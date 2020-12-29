/*
boj10871.cpp
2020.12.29 정설희
X보다 작은 수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define MAX 10'000

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	int x = 0;
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		int k = 0;
		cin >> k;
		if (k < x)
			cout << k << " ";
	}

}