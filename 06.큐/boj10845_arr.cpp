/*
boj10845_arr.cpp
2021.01.01 정설희
*/

#include <bits/stdc++.h>
using namespace std;
int q[10001];
int head = 0;
int tail = 0;

void push() {
	int k; cin >> k;
	q[tail++] = k;
}

void pop() {
	if (head == tail) {
		cout << -1 << "\n"; return;
	}
	cout << q[head++]<<"\n";
}

void size() {
	cout << tail - head<<"\n";
}

void empty() {
	if (head == tail)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}

void front() {
	if (head == tail)
		cout << -1 << "\n";
	else
		cout << q[head] << "\n";
}

void back() {
	if (head == tail)
		cout << -1 << "\n";
	else
		cout << q[tail - 1] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			push();
		}
		else if (s == "pop") {
			pop();
		}
		else if (s == "size")
			size();
		else if (s == "empty") {
			empty();
		}
		else if (s == "front") {
			front();
		}
		else if (s == "back") {
			back();
		}
	}
}