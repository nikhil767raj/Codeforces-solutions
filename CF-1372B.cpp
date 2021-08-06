#include<bits/stdc++.h>
using namespace std;
#define ll    long long
bool isprime(ll n) {
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int t; cin >> t;
    while (t--) {
        ll n, mx = INT_MIN, a = -1, b = -1; cin >> n;
        if (isprime(n)) {
            cout << 1 << " " << n - 1 << endl;
            continue;
        }
        for (ll i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                mx = max(mx, n / i);
            }
        }
        cout << mx << " " << n - mx << endl;
    }
}