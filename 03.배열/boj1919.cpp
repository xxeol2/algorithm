/*
boj1919.cpp
2020.12.30 정설희
애너그램 만들기
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[26] = { 0, };

	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.length(); i++)
		arr[s1[i] - 'a']++;

	for (int i = 0; i < s2.length(); i++)
		arr[s2[i] - 'a']--;

	int count = 0;
	for (int i = 0; i < 26; i++) {
		count += abs(arr[i]);
	}
	cout << count;
}