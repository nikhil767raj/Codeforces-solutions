#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
	ll l, r, count = 0; cin >> l >> r;
	for (ll i = 0; i <= 35; i++) {
		for (ll j = 0; j <= 35; j++) {
			if (pow(2, i) * (pow(3, j)) >= l && pow(2, i) * (pow(3, j)) <= r) { count++;}
		}
	}
	cout << count << endl;

}