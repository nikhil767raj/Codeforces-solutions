#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
    ll t; cin >> t;
    while (t--) {
        ll p, a, b, c, z, x, y; cin >> p >> a >> b >> c;
        if (p % a == 0 || p % b == 0 || p % c == 0) {
            cout << "0" << endl;
            continue;
        }
        z = p / a + 1;
        z = a * z - p;

        x = p / b + 1;
        x = b * x - p;

        y = p / c + 1;
        y = c * y - p;

        cout << min(z, min(x, y)) << endl;
    }
}