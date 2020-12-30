/*
boj10808.cpp
2020.12.30 정설희
알파벳 개수
*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num[26] = { 0, };
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int tmp = s[i] - 'a';
		num[tmp]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << num[i] << ' ';
	}

}