/*
boj1260.cpp
2020.12.30 정설희
DFS와 BFS
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> Graph[1001];
queue<int> q;
int state[1001];
void DFS(vector<int> Graph[], int v) {
    cout << v << " ";
    sort(Graph[v].begin(), Graph[v].end());
    for (auto e : Graph[v]) {
        if (state[e] == 0) {
            state[e] = 1;
            DFS(Graph, e);
        }
    }
}


void BFS(vector<int> Graph[], int v) {
    cout << v << " ";
    sort(Graph[v].begin(), Graph[v].end());
    for (auto e : Graph[v]) {
        q.push(e);
    }

    while (!q.empty()) {
        int e = q.front();
        q.pop();
        if (state[e] == 0) {
            state[e] = 1;
            BFS(Graph, e);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        Graph[tmp1].push_back(tmp2);
        Graph[tmp2].push_back(tmp1);
    }
    state[v] = 1;
    DFS(Graph, v);
    cout << "\n";
    for (int i = 0; i < 1001; i++)
        state[i] = 0;
    state[v] = 1;
    BFS(Graph, v);
}