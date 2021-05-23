#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
	ll n; cin >> n;
	ll x = sqrt(n);
	for (ll i = x; i >= 1; i--) {
		if (n % i == 0 && __gcd(i, n / i) == 1) {
			cout << i << " " << n / i << endl;
			break;
		}
	}
}