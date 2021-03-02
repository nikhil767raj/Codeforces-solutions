#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b, x, y, n, mn = 1e18; cin >> a >> b >> x >> y >> n;
        ll aa = a;
        ll bb = b;
        ll nn = n;
        if (aa - x >= n) {
            mn = min(mn, (aa - n) * bb);
        }
        else {
            n = n - (aa - x);
            if (bb - y >= n) {
                mn = min(mn, (x * (bb - n)));
            }
            else {
                mn = min(mn, (x * y));
            }
        }
        if (b - y >= nn) {
            mn = min(mn, (b - nn) * a);
        }
        else {
            nn = nn - (b - y);
            if (a - x >= nn) {
                mn = min(mn, (y * (a - nn)));
            }
            else {
                mn = min(mn, (x * y));
            }
        }
        cout << mn << endl;
    }
}