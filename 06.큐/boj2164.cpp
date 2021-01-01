/*
boj2164.cpp
2021.01.01 정설희
카드2
*/

#include <bits/stdc++.h>
#define MAX 500'0001
using namespace std;
queue <int> Q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		Q.push(i);

	while (Q.size()>1) {
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	cout << Q.front();

}