#include <bits/stdc++.h>
using namespace std;
#define ll     long long

int main() {
	int t; cin >> t;
	while (t--) {
		ll n, count = 0, one = 0, zer = 0; cin >> n;
		bool ok = true;
		string s, p; cin >> s >> p;
		for (int i = 0; i < n; i++) {
			if (s[i] == p[i]) continue;
			else if (s[i] != p[i]  && s[i] == '0') {
				if (one > 0) {
					one--;

				}
				else {
					cout << "No" << endl;
					ok = false;
					break;
				}
			}
			else if (s[i] != p[i] && s[i] == '1') one++;

		}
		if (ok == false) continue;
		if (one == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
