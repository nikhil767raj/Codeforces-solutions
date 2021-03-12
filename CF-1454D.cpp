#include<bits/stdc++.h>
using namespace std;
#define ll      long long
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, count = 0, mul = 1, cnt = 0; cin >> n;
        vector < pair<ll, ll> > v;
        for (ll i = 2; i * i <= n; i++) {
            count = 0;
            while (n % i == 0) {
                n = n / i;
                count++;
            }
            if (count > 0) v.push_back({count, i});
        }
        // cout << n << endl;
        if (n > 1) v.push_back({1, n});
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        cout << v[0].first << endl;
        for (ll i = 1; i < v[0].first; i++) {
            cout << v[0].second << " ";
        }
        for (ll i = 1; i < v.size(); i++) {
            ll cnt = 0;
            while (cnt < v[i].first) {
                cnt++;
                mul = mul * v[i].second;
            }
        }
        cout << mul*v[0].second << endl;
    }

}