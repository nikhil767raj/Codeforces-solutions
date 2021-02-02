#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
int main() {
    ll q; cin >> q;
    while (q--) {
        ll n, m, ans = 0, z, zz, zr; cin >> n >> m;
        ll ar[11] = {0};
        ar[0] = 0;
        for (int i = 1; i < 11; i++) {
            ar[i] = (m * i) % 10;
        }
        for (int i = 1; i < 11; i++) {
            ar[i] = ar[i] + ar[i - 1];
        }
        z = n / m;
        zz = z / 10;
        zr = z % 10;
        ans = ans + (ar[10]) * zz;
        ans = ans + ar[zr];
        cout << ans << endl;

    }
}