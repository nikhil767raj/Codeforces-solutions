#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
bool power(ll x)
{
	return (x != 0) && ((x & (x - 1)) == 0);
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		if (power(n)) {
			cout << "NO" << endl;
		}
		else cout << "YES" << endl;


	}
}