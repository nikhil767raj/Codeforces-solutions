#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    ll n, m, k; cin >> n >> m >> k;
    if (k < n) {
        cout << k + 1 << " " << 1  << endl;
        return 0;
    }
    k = k - n;
    ll col = m - 1;
    ll row = k / col;
    if (row & 1) cout << n - row << " " << m - (k % col) << endl;
    else cout << n - row << " " << k % col + 2 << endl;
    return 0;
}