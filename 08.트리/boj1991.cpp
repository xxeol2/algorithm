/*
boj1991.cpp
2021.01.01 정설희
트리 순회
*/

#include <bits/stdc++.h>
using namespace std;
char tree[26][2] = { '.', };

void preorder(char c) {
    if (c == '.') return;
    else {
        cout << c;
        preorder(tree[c - 'A'][0]);
        preorder(tree[c - 'A'][1]);
    }
}

void inorder(char c) {
    if (c == '.') return;
    else {
        inorder(tree[c - 'A'][0]);
        cout << c;
        inorder(tree[c - 'A'][1]);
    }
}

void postorder(char c) {
    if (c == '.') return;
    else {
        postorder(tree[c - 'A'][0]);
        postorder(tree[c - 'A'][1]);
        cout << c;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char root, left, right; cin >> root >> left >> right;
        tree[root - 'A'][0] = left;
        tree[root - 'A'][1] = right;
    }
    preorder('A');
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
}