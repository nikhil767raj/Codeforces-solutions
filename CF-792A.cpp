// This code is written by Nikhil Raj
// Contact:-- nikhil767raj@gmail.com
//--------------------------------------------

#include<bits/stdc++.h>
using namespace std;
#define ll       		 long long int
#define nl       		 endl
#define push_back        pb
#define first            f
#define second           s
#define mod              100000007
#define inf              1e9

void nikhil() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	ll n, z, mn = 0; cin >> n;
	ll ar[n];
	map<ll, ll>mp;
	for (ll i = 0; i < n; i++) cin >> ar[i];
	sort(ar, ar + (n));
	for (int i = 1; i < n; i++) {
		z = abs(ar[i] - ar[i - 1]);
		mp[z]++;
	}
	for (auto i : mp) {
		cout << i.first << " " << i.second << endl;
		break;
	}
	return 0;
}