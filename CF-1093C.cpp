#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
    ll n, j = 0, k = 0; cin >> n;
    vector < ll > v, vt, vk;
    for (ll i = 0; i < n / 2; i++) {
        ll elem; cin >> elem;
        v.push_back(elem);
    }
    bool ok = true;
    for (ll i = 0; i < v.size(); i++) {
        if (ok) {
            vk.push_back(j);
            vt.push_back(v[i] - j);
            ok = false;
        }
        else {
            if (v[i] <= vt.back()) {
                vk.push_back(j);
                vt.push_back(v[i] - j);
            }
            else {
                if (v[i] - vt.back() < vk.back()) {
                    vk.push_back(vk.back());
                    vt.push_back(v[i] - (vk.back()));
                    j = vk.back();
                    continue;
                }
                vk.push_back(v[i] - vt.back());
                vt.push_back(vt.back());
                j = (v[i] - vt.back());
            }
        }
    }
    for (auto i : vk) cout << i << " ";
    reverse(vt.begin(), vt.end());
    for (auto i : vt) cout << i << " ";
    cout << endl;
}