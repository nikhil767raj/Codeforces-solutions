#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		cout << 2 * (r - l + 1) - 1 << endl;
	}
}