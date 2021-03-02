#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, k, mn = 1e9, mx = -1e9, x, count = 0, p = 0; cin >> n >> k;
        vector < ll > v;
        for (ll i = 0; i < n; i++) {
            ll elem; cin >> elem;
            v.push_back(elem);
            mx = max(mx, elem);
        }
        for (ll i = 1; i <= mx; i++) {
            x = i;
            count = 0; p = 0;
            // cout << x << endl;
            for (ll j = 0; j < v.size(); j++) {
                if (x == v[j]) {
                    if (p == k) {
                        count++;
                        p = 0;
                    }
                    else if (p != 0) p++;
                    if (p == k) {
                        count++;
                        p = 0;
                    }
                }
                else {
                    p++;
                    if (p < k) continue;
                    else {
                        count++;
                        p = 0;
                    }

                }
            }
            if (p != 0) count++;
            // cout << count << "m" << endl;
            mn = min(mn, count);

        }
        // mn=min(mn,count);
        cout << mn << endl;
    }
}