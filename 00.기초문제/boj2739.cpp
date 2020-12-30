/*
boj2739.cpp
2020.12.30 정설희
구구단
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;

	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << "\n";
	}
}