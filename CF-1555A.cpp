#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        if (n <= 6) {
            cout << 15 << endl;
            continue;
        }
        ll sum = 0;
        ll z = n / 6;
        ll r = n % 6;
        if (r == 0)sum += z * 15;
        else if (r == 1 || r == 2) sum += (z - 1) * 15 + 20;
        else if (r == 3 || r == 4) sum += (z - 1) * 15 + 25;
        else  sum += (z + 1) * 15;
        cout << sum << endl;
    }
}