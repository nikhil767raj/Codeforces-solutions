#include<bits/stdc++.h>
using namespace std;
#define ll     long long
bool prime(ll k) {
    for (ll i = 2; i <= sqrt(k); i++)if (k % i == 0) return false;
    return true;
}
int main() {
    ll n, step = 0;; cin >> n;
    if (n % 2 == 0) cout << n / 2 << endl;
    else if (prime(n)) {
        cout << "1" << endl;
    }
    else {
        for (int i = 3; i <= n / 2; i++) {
            if (prime(i) && n % i == 0) {
                n = n - i;
                break;
            }
        }
        cout << n / 2 + 1 << endl;

    }
}