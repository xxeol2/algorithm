/*
boj2577.cpp
2020.12.30 정설희
숫자의 개수
*/

#include <bits/stdc++.h>
using namespace std;
int arr[100];
int num[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	string s = to_string(a * b * c);
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - '0']++;
		//arr[s[i]]++; /*ERROR*/
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}