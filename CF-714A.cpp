#include<bits/stdc++.h>
using namespace std;
#define ll      long long int

int main() {
	ll l1, r1, l2, r2, k; cin >> l1 >> r1 >> l2 >> r2 >> k;
	ll mx = max(l1, l2);
	ll mn = min(r1, r2);
	if (l2 > r1 || r2 < l1) {cout << "0" << endl; return 0;}
	if (k >= max(l1, l2) && k <= min(r1, r2)) {
		cout << abs(mx - mn) << endl;
	}
	else {
		cout << abs(mx - mn) + 1 << endl;

	}
}