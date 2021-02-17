#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector < int > v;
        bool ok = true;
        int mn = INT_MAX, count = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
        }
        for (int i = 0; i < n - 1; i++) {
            ok = true;
            if (2 * min(v[i], v[i + 1]) >= max(v[i], v[i + 1])) {
                // cout << v[i] << " " << v[i+1] << endl;
                continue;
            }
            else {
                mn = min(v[i], v[i + 1]);
                mx = max(v[i], v[i + 1]);
                while (1) {
                    if (mn == 1) {mn = mn + 1; ok = false; count++;}
                    else {
                        mn = mn * 2;
                        count++;
                    }
                    // cout << mn << " ";
                    if (2 * mn >= mx) break;
                    else continue;
                }
            }
        }
        cout << count << endl;
    }
}