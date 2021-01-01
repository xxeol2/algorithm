/*
boj10845_STL.cpp
2021.01.01 정설희
*/

#include <bits/stdc++.h>
using namespace std;

queue <int> Q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int k;
			cin >> k;
			Q.push(k);
		}
		else if (s == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
				Q.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (s == "size")
			cout << Q.size() << "\n";
		else if (s == "empty") {
			if (Q.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front") {
			if (!Q.empty())
				cout << Q.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (s == "back") {
			if (!Q.empty())
				cout << Q.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}