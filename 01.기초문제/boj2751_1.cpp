/*
boj2751_1.cpp
2020.12.30 정설희
수 정렬하기 2 // sort
*/

#include <bits/stdc++.h>
using namespace std;
int arr[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i]<<"\n";
}