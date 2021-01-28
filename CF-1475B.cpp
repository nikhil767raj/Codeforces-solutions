#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool ok = true;
        for (int i = 0; i < 1001; i++) {
            int z = n - (2020 * i);
            // cout << z << " ";
            if (z < 0) { break;}
            if (z % 2021 == 0) {cout << "YES" << endl; ok = false; break;}
            // else cout << "NO" << endl;
        }
        if (ok) cout << "NO" << endl;
    }
}