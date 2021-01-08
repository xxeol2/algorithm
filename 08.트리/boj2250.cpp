/*
boj2250.cpp
2021-01-08 정설희
트리의 높이와 너비
*/

#include <bits/stdc++.h>
using namespace std;
int tree[10001][2] = { 0, };
bool rootNode[10001];
int location[10001][2] = { 0, };
int col = 0;
int row = 0;
vector <int> loc[10001];
vector <pair<int,int>> len;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.second > b.second;
}

void inorder(int k, int row) {
    if (k == -1) return;
    inorder(tree[k][0],row+1);
    col++;
    loc[row].push_back(col);
    inorder(tree[k][1],row+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    fill_n(rootNode, n + 1, true);

    for (int i = 0; i < n; i++) {
        int root, left, right; cin >> root >> left >> right;
        tree[root][0] = left; tree[root][1] = right;
        if(left != -1)
            rootNode[left] = false;
        if(right != -1)
            rootNode[right] = false;
    }
    int root = 0;
    for (int i = 1; i <= n; i++) {
        if (rootNode[i]) {
            root = i;
            break;
        }
    }
    inorder(root, 1);
    int row = 1;
    while (loc[row].size()) {
        int min = loc[row][0];
        int max = loc[row][loc[row].size() - 1];
        len.push_back({ row,max - min + 1 });
        row++;
    }
    sort(len.begin(), len.end(),cmp);
    cout << len[0].first << " " << len[0].second;
}