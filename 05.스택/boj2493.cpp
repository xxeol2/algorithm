/*
boj2493.cpp
2021.01.01 정설희
탑
*/

#include <bits/stdc++.h>
#define MAX 500'0001
using namespace std;
stack <int> tower;
stack <int> stk1; //값
stack <int> stk2; //순서
int arr[MAX][1];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		tower.push(tmp);
	}

	int count = n;
	while (!tower.empty()) {
		while (!stk1.empty() && tower.top() > stk1.top()) {
			stk1.pop();
			arr[stk2.top()][0] = count;
			stk2.pop();
		}
		stk1.push(tower.top());
		stk2.push(count);
		tower.pop();
		count--;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i][0] << " ";
	}
}