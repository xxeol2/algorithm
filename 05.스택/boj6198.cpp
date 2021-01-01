/*
boj6198.cpp
2021.01.01 정설희
옥상 정원 꾸미기
*/

#include <bits/stdc++.h>
#define MAX 500'0001
using namespace std;
stack <int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	long long count = 0;
	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;

		while (!s.empty() && s.top() <= tmp) {
			s.pop();
		}
		count += (long long)s.size();
		s.push(tmp);
	}
	cout << count;

}