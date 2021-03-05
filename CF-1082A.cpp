#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, x, y, count = 0, xx, b, d, mn = INT_MAX; cin >> n >> x >> y >> d;
        bool ok = true;
        if (x == y) {
            cout << "0" << endl;
            continue;
        }
        else {
            b = abs(x - y);
            if (b % d == 0)  mn = min(mn, b / d);
            if (y == n)  mn = min(mn, (b / d + 1));
            if ((y - 1) % d == 0) mn = min(mn, ((y - 1) / d + (x - 1) / d + 1));
            if ((n - y) % d == 0) mn = min(mn, ((n - y) / d + (n - x) / d + 1));
        }

        if (mn == INT_MAX) cout << "-1" << endl;
        else cout << mn << endl;
    }
}