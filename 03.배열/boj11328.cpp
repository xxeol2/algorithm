/*
boj11328.cpp
2020.12.30 정설희
Strfry
*/

#include <bits/stdc++.h>
using namespace std;


string func(string s1, string s2) {
	int arr[26] = { 0, };
	if (s1.length() != s2.length())
		return "Impossible";
	for (int i = 0; i < s1.length(); i++) {
		arr[s1[i] - 'a']++;
		arr[s2[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0)
			return "Impossible";
	}
	return "Possible";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << func(s1, s2)<<"\n";
	}
}