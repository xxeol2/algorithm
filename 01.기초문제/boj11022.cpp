/*
boj11022.cpp
2020.12.28 정설희
A+B-8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	int b;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << "Case #"<< i+1 << ": " << a<<" + " << b << " = " <<a + b << endl;

	}
	return 0;

}