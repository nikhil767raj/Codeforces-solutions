#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
    ll n, elem, a = 0, b = 0, moves = 0; cin >> n;
    ll k = 1e5 + 5;
    vector < ll > v(k, 0);
    vector < ll > vt(k, 0);
    for (ll i = 0; i < n; i++) {
        cin >> elem;
        v.push_back(elem);
    }
    for (ll i = 0; i < n; i++) {
        cin >> elem;
        vt.push_back(elem);
    }
    bool ok = true;
    sort(v.begin(), v.end(), greater<ll>());
    sort(vt.begin(), vt.end(), greater<ll>());
    ll j = 0, i = 0;
    while (moves < 2 * n) {
        moves++;
        if (ok) {
            ok = false;
            if (v[i] >= vt[j]) {
                a = a + v[i];
                i++;
            }
            else  j++;
        }
        else {
            ok = true;
            if (vt[j] >= v[i]) {
                b = b + vt[j];
                j++;
            }
            else  i++;
        }
    }
    cout << (a - b) << endl;
}