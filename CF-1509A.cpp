#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector < ll > v, vt, vp;
        for (ll i = 0; i < n; i++) {
            ll elem; cin >> elem;
            if (elem % 2 == 0) vt.push_back(elem);
            else vp.push_back(elem);
        }
        if (vp.size() > vt.size()) {
            for (ll i = 0; i < vp.size(); i++) cout << vp[i] << " ";
            for (ll i = 0; i < vt.size(); i++) cout << vt[i] << " "; cout << endl;
        }
        else {
            for (ll i = 0; i < vt.size(); i++) cout << vt[i] << " ";
            for (ll i = 0; i < vp.size(); i++) cout << vp[i] << " "; cout << endl;

        }
    }
}