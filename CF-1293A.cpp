#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
    int t; cin >> t;
    while (t--) {
        ll n, s, k, mn = INT_MAX, count = -1; cin >> n >> s >> k;
        vector < ll > v;
        for (ll i = 1; i <= k; i++) {
            ll elem; cin >> elem;
            v.push_back(elem);
        }
        sort(v.begin(), v.end());
        for (ll i = s; i >= 1; i--) {
            if (binary_search(v.begin(), v.end(), i)) {
                count++;
            }
            else {
                count++;
                mn = min(mn, count);
                break;
            }
        }
        count = 0;
        for (ll i = s + 1; i <= n; i++) {
            if (binary_search(v.begin(), v.end(), i)) {
                count++;
            }
            else {
                count++;
                mn = min(mn, count);
                break;
            }
        }
        cout << mn << endl;
    }
}