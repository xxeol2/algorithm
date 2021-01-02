/*
boj1260.cpp
2021.01.02 정설희
DFS와 BFS
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> graph[1001];
int visited[1001];

void DFS(int v) {
	visited[v] = 1;
	cout << v << " ";
	for (auto e : graph[v]) {
		if (visited[e] == 0)
			DFS(e);
	}
}

void BFS(int v) {
	queue<int> Q;
	visited[v] = 1;
	Q.push(v);
	while (!Q.empty()) {
		v = Q.front();
		Q.pop();
		cout << v << " ";
		for (auto e : graph[v]) {
			if (!visited[e]) {
				visited[e] = 1;
				Q.push(e);
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int c1, c2;
		cin >> c1 >> c2;
		graph[c1].push_back(c2);
		graph[c2].push_back(c1);
	}
	for (int i = 0; i < 1001; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	DFS(v);
	cout << "\n";
	memset(visited, 0, sizeof(visited));
	BFS(v);
}