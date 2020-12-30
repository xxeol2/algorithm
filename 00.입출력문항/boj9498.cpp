/*
boj9498.cpp
2020.12.30 정설희
시험 성적
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	if (n >= 90 && n <= 100)
		cout << 'A';
	else if (n >= 80 && n < 90)
		cout << 'B';
	else if (n >= 70 && n < 80)
		cout << 'C';
	else if (n >= 60 && n < 70)
		cout << 'D';
	else
		cout << 'F';
}