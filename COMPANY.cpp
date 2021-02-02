#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    int q; cin >> q;
    while (q--) {
        int l, r, k; cin >> l >> r >> k;
        l = l - 1;
        r = r - 1;
        string z;
        for (int i = l; i <= r; i++)   z = z + ar[i];
        sort(z.begin(), z.end());
        cout << z[k - 1] << endl;
    }
    return 0;
}