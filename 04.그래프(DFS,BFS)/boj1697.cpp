/*
boj1697.cpp
2021.01.02 정설희
숨바꼭질
*/

#include <bits/stdc++.h>
#define MAX 100'001
using namespace std;

queue <pair<int, int>> q;
bool visited[MAX];
int n, k;

bool check(int i) {
	if (i >= 0 && i < MAX && !visited[i]) {
		visited[i] = true;
		return true;
	}
	return false;
}

void push_q(int v, int cnt) {
	if (check(v - 1))
		q.push({ v - 1,cnt });
	if (check(v + 1))
		q.push({ v + 1,cnt });
	if (check(v * 2))
		q.push({ v * 2,cnt });
}

int bfs(int v) {
	push_q(v, 1);
	while (!q.empty()) {
		int tmp1 = q.front().first;
		int tmp2 = q.front().second;
		if (tmp1 == k)
			return tmp2;
		q.pop(); tmp2++;
		push_q(tmp1, tmp2);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;

	if (n == k) {
		cout << 0;
		return 0;
	}
	cout << bfs(n);
}