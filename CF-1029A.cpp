#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, strt = 0; cin >> n >> k;
	string s; cin >> s;
	for (int i = 0; i < n - 1; i++)
		if (s.substr(0, i + 1) == s.substr(n - i - 1)) strt = i + 1;
	cout << s;
	for (int i = 1; i < k; i++) cout << s.substr(strt);
	return 0;
}