/*
boj10952.cpp
2020.12.28 정설희
A+B-5
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	while (cin >> a >> b) {
		if ((a == b) && (a == 0)) {
			break;
		}
		cout << a + b << endl;
	}
	return 0;

}