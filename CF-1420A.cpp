#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        bool ok = true;
        vector < int > vt;
        int n; cin >> n;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
            vt.push_back(elem);
        }
        sort(vt.begin(), vt.end(), greater<int>());
        for (int i = 0; i < v.size(); i++) {
            if (i > 0) {
                if (v[i] == v[i - 1]) {
                    ok = false;
                    break;
                }
            }
            if (v[i] == vt[i]) continue;
            else {
                ok = false;
                break;
            }
        }
        if (ok) cout << "NO" << endl;
        else cout << "YES"  << endl;
    }
}