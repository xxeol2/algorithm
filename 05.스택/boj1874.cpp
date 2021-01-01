/*
boj1874.cpp
2021.01.01 정설희
스택 수열
*/

#include <bits/stdc++.h>
using namespace std;
vector <int> vec;
vector <char> order;
stack <int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i= 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	int k = 0;
	for (int i = 1; i <= n; i++) {
		s.push(i);
		order.push_back('+');
		
		while (!s.empty() && s.top() == vec[k]) {
			s.pop();
			order.push_back('-');
			k++;
		}
	}
	
	if (s.empty()) {
		for (int i = 0; i < order.size(); i++) {
			cout << order[i] << "\n";
		}
	}
	else
		cout << "NO";

}