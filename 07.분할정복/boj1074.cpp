/*
boj10828.cpp
2021.01.01 정설희
스택
*/

#include <bits/stdc++.h>
#define MAX 10'001
using namespace std;

int dat[MAX];
int pos;

void push() {
	int k;
	cin >> k;
	dat[pos++] = k;
}

void pop() {
	if (pos > 0)
		cout << dat[--pos] << "\n";
	else
		cout << -1 << "\n";
}

void size() {
	cout << pos << "\n";
}

void empty() {
	if (pos == 0)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}

void top() {
	if (pos > 0)
		cout << dat[pos - 1] << "\n";
	else
		cout << -1 << "\n";
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push")
			push();
		else if (s == "pop")
			pop();
		else if (s == "size")
			size();
		else if (s == "empty")
			empty();
		else if (s == "top")
			top();
	}
}