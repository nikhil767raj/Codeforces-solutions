#include<bits/stdc++.h>
using namespace std;
#define ll     unsigned long long int
int main() {
    ll r;
    vector < ll > v;
    for (ll i = 1; i <= 10000; i++) {
        r = i * i * i;
        v.push_back(r);
    }
    int t; cin >> t;
    while (t--) {
        ll x, z, y; cin >> x;
        bool ok = false;
        for (ll i = 0; i < v.size(); i++) {
            z = x - v[i];
            if (z <= 0) { ok = false; break;}
            y = cbrt(z);
            if (y * y * y == z) {
                ok = true;
                break;
            }
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}