/*
boj10807.cpp
2020.12.30 정설희
개수 세기
*/

#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int v;
	cin >> v;
	for (int i = 0; i < n; i++) {
		if (v == arr[i])
			count++;
	}
	cout << count;
}