/*
boj1697.cpp
2021.01.02 정설희
미로 탐색
*/

#include <bits/stdc++.h>
using namespace std;
int arr[102][102];
int visited[102][102];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n, m;

bool init(int x, int y) {
	if (x > 0 && y > 0 && x <= n && y <= m)
		return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
			arr[i][j+1] = s[j] - '0';
	}
	queue <pair<int,int>> q;
	q.push({ 1,1 });
	visited[1][1] = 1;
	int cnt = 1;
	while (!q.empty()) {
		int nx = q.front().first;
		int ny = q.front().second;
		cnt = visited[nx][ny];
		if (nx == n && ny == m)
			break;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = nx + dx[i];
			int y = ny + dy[i];
			if (!visited[x][y] && init(x,y) && arr[x][y]) {
				q.push({ x,y });
				visited[x][y] = cnt + 1;
			}
		}
	}
	cout << cnt;
}