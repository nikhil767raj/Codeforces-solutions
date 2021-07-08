#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, m; cin >> n >> m;
        if (n == m) {
            cout << "0" << " " << "0" << endl;
            continue;
        }
        ll mx = max(n, m);
        ll mn = min(n, m);
        ll diff = mx - mn;
        cout << mx - mn << " ";
        ll gcd = mx - mn;
        if (gcd == mn) cout << 0 << endl;
        else if (gcd > mn) {
            cout << min(gcd - mn, mn) << endl;
        }
        else {
            ll cl = ((mn + gcd - 1) / gcd) * gcd;
            ll p = mn % gcd;
            ll ck = cl - mn;
            cout << min(ck, p) << endl;
        }
    }
}