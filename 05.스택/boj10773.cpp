/*
boj10773.cpp
2021.01.01 정설희
제로
*/

#include <bits/stdc++.h>
using namespace std;
stack<int> stk;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0)
			stk.pop();
		else
			stk.push(n);
	}
	int sum = 0;
	int size = stk.size(); // for문 돌면서 size 줄어들어서 미리 저장해둬야함!!
	for (int i = 0; i < size; i++) {
		sum += stk.top();
		stk.pop();
	}

	cout << sum;
}