#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int z = sqrt(v[i]);
            if (z * z == v[i]) continue;
            else {
                ok = false;
                break;
            }
        }
        if (ok) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}