/*
boj2667.cpp
2021.01.02 정설희
단지번호붙이기
*/

#include <bits/stdc++.h>
using namespace std;
int arr[27][27];
int visited[27][27];

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
vector <int> vec;

int n;
int cnt;

bool inside(int x, int y) {
	if (x >= 0 && y >= 0 && x < n && y < n)
		return true;
	return false;
}

void dfs(int x, int y) {
	cnt++;
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (arr[nx][ny] && !visited[nx][ny] && inside(nx, ny)) {
			dfs(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < n; j++)
			arr[i][j] = s[j] - '0';
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] && !visited[i][j]) {
				dfs(i, j);
				vec.push_back(cnt);
				cnt = 0;
			}
		}
	}
	cout << vec.size() << "\n";
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}