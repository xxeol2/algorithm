/*
boj10869.cpp
2020.12.30 정설희
사칙연산
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n' << a % b;
}