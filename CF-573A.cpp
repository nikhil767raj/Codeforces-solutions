#include <bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {

	int n, lc = 1; cin >> n;
	vector < int > v;
	for (int i = 0; i < n; i++) {
		ll elem; cin >> elem;
		while (elem % 2 == 0) elem = elem / 2;
		while (elem % 3 == 0) elem = elem / 3;
		v.push_back(elem);
	}
	ll k = v[0];
	for (ll i = 1; i < n; i++) {
		if (k == v[i]) continue;
		else {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
