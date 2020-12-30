/*
ON.cpp
2020.12.30 정설희
시간복잡도 O(N)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int len) {
	int freq[101] = { 0, };
	for (int i = 0; i < len; i++) {
		if (freq[100 - arr[i]] != 0)
			return 1;
		freq[arr[i]] = 1;
	}
	return 0;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr1[3] = { 1,52,48 };
	cout << func2(arr1, 3) << "\n";
	int arr2[2] = { 50,42 };
	cout << func2(arr2, 2) << "\n"; 
	int arr3[4] = {4,13,63,87};
	cout << func2(arr3, 4) << "\n";

}