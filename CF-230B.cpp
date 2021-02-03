#include<bits/stdc++.h>
using namespace std;
#define ll     long long
bool prime(ll k) {
    for (ll i = 2; i <= sqrt(k); i++) {
        if (k % i == 0) return false;
    }
    return true;
}
int main() {
    ll n; cin >> n;
    while (n--) {
        ll x; cin >> x;
        ll y = sqrt(x);
        if (y * y == x && x != 1) {
            if (prime(y)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}