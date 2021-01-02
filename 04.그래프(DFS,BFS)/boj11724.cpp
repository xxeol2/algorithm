/*
boj11724.cpp
2021.01.02 정설희
연결 요소의 개수
//하나의 노드의 case도 고려해주기!!
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> graph[1001];
int visited[1001];

void dfs(int v) {
	visited[v] = 1;
	for (auto e : graph[v]) {
		if (!visited[e])
			dfs(e);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			count++;
		}
	}
	cout << count;
	
}