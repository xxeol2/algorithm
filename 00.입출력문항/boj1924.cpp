/*
boj1924.cpp
2020.12.30 정설희
2007년
*/

#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int x, y;
	cin >> x >> y;
	int tmp = y;
	for (int i = 2; i <= x; i++) {
		tmp += n[i-1];
	}
	int k = tmp % 7;
	
	cout << day[k];


}