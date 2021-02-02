#include<bits/stdc++.h>
using namespace std;
#define ll           long long
int main() {
	ll n, mn = 1e6, ev = 0, od = 0; cin >> n;
	vector < ll > v;
	for (int i = 0; i < n; i++) {
		int elem; cin >> elem;
		if (elem % 2 == 0) ev++;
		else od++;
		v.push_back(elem);
	}
	cout << min(ev, od) << endl;


}