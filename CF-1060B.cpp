#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
ll sum(ll k) {
    ll r = 0, num = 0;
    while (k != 0) {
        num = k % 10;
        r = r + num;
        k = k / 10;
    }
    return r;
}
int main() {
    ll n, x = 0, z; cin >> n;
    while (x * 10 + 9 <= n)
        x = x * 10 + 9;

    z = n - x;
    cout << sum(x) + sum(z) << endl;
}