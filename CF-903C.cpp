#include<bits/stdc++.h>
using namespace std;
#define ll     long long
int main() {
    ll n, mx = INT_MIN; cin >> n;
    unordered_map<ll, ll>mp;
    bool ok = true;
    vector < ll > v;
    for (ll i = 0; i < n; i++) {
        ll elem; cin >> elem;
        v.push_back(elem);
        mp[v[i]]++;
        mx = max(mx, mp[v[i]]);
    }
    cout << mx << endl;

}