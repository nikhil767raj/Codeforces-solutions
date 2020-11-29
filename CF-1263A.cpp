#include <bits/stdc++.h>
using namespace std;

int main () {
	int t; cin >> t;
	while (t--) {
		long long r, g, b; cin >> r >> g >> b;
		vector<long long> a = {r, g, b};
		sort(a.begin(), a.end());
		// long long mn = min({r,g,b});
		// r-=mn, g-=mn, b-=mn;

		// if(r==mn){
		// 	cout << mn + min(g,b) << endl;
		// 	continue;
		// }
		// if(g==mn){
		// 	cout << mn + min(r,b) << endl;
		// 	continue;
		// }
		// if(b==mn){
		// 	cout << mn + min(g,r) << endl;
		// 	continue;
		// }
		cout << a[0] + min(a[1], a[2] - a[0]) << endl;;
	}
	return 0;
}
