/*
boj10950.cpp
2020.12.28 정설희
A+B-3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n = 0;
	scanf("%d", &n);
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		int a = 0;
		int b = 0;
		scanf("%d", &a);
		scanf("%d", &b);
		vec[i] = a + b;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", vec[i]);
	}
}