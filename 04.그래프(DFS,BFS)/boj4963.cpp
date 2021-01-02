/*
boj4963.cpp
2021.01.02 정설희
섬의 개수
*/

#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
int visited[51][51];
int w, h;
/* 8방향 */
int dx[8] = { 0,0,1,1,1,-1,-1,-1 };
int dy[8] = { 1,-1,0,1,-1,0,1,-1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (arr[ny][nx]==1 && visited[ny][nx]==0 && nx >= 0 && ny >= 0 && nx < w && ny < h) {
			dfs(ny, nx);
		}
	}
}
int main() {
	while (true) {
		cin >> w >> h;
		if (!w && !h)
			return 0;
		
		/* 값 입력 */
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cin >> arr[i][j];
		}
		
		int count = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j] == 1 && visited[i][j] == 0) {
					dfs(i, j);
					count += 1;
				}
			}
		}
		cout << count << "\n";
	}

}