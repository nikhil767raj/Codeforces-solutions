#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
    ll n, k, ans = 0; cin >> n >> k;
    vector < ll > v;
    for (ll i = 0; i < n; i++) {
        ll elem; cin >> elem;
        v.push_back(elem);
    }
    string s; cin >> s;
    for (ll i = 0; i < s.length(); i++) {
        ll j = i;
        vector < ll > vk;
        while (j < s.length() && s[j] == s[i]) {
            vk.push_back(v[j]);
            j++;
        }
        i = j - 1;
        ll ck = 0;
        sort(vk.begin(), vk.end(), greater<ll>());
        for (int p = 0; p < vk.size(); p++) {
            ck++;
            if (ck > k) break;
            ans = ans + vk[p];
        }

    }
    cout << ans << endl;
}