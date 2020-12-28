/*
boj11721.cpp
2020.12.28 정설희
열 개씩 끊어 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	string str;
	int count = 0;
	while (cin >> c) {
		cout << c;
		count++;
		if (count == 10) {
			cout << endl;
			count = 0;
		}
	}
}