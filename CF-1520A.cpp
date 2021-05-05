#include <bits/stdc++.h>
using namespace std;
#define ll     long long

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		string temp = "";
		bool ok = true;
		for (int i = 0; i < s.length(); i++) {
			if (i == 0) {
				temp = temp + s[i];
				continue;
			}
			else if (s[i] == s[i - 1]) {
				continue;
			}
			else {
				if (temp.find(s[i]) != string::npos) {
					ok = false;
					break;
				}
				else temp = temp + s[i];
			}
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}