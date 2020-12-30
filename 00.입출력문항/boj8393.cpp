/*
boj8393.cpp
2020.12.30 정설희
합
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	cout << result;
}