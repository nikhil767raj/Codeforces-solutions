#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, dist = 0; cin >> n;
        vector < ll > v, vt;
        unordered_map < ll, ll > mp;
        for (ll i = 0; i < n; i++) {
            ll elem; cin >> elem;
            v.push_back(elem);
            mp[elem]++;
        }
        if (n == 1) {
            cout << "0" << endl;
            continue;
        }
        for (auto i : mp) {
            if (i.second == 1) dist++;
            else {
                vt.push_back(i.second);
            }
        }
        if (vt.size() == 0) {
            cout << 1 << endl;
            continue;
        }
        sort(vt.begin(), vt.end(), greater< ll >());

        if (dist >= vt[0]) {
            cout << vt[0] << endl;
            continue;
        }
        else {
            if (vt.size() - 1 > 0) {
                ll z = dist + vt.size() - 1;
                if (z >= vt[0]) {
                    cout << vt[0] << endl;
                }
                else {
                    if (vt[0] - z >= 2) cout << z + 1 << endl;
                    else cout << z << endl;
                }
            }
            else {
                if (vt[0] - dist >= 2) cout << dist + 1 << endl;
                else cout << dist << endl;
            }
        }
    }
}