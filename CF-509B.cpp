#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    int n, k, p = 1, x, mn = INT_MAX; cin >> n >> k;
    vector < int > v;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
        mn = min(mn, elem);
    }
    for (int i = 0; i < n; i++) {
        v[i] = v[i] - mn;
        if (v[i] > k) ok = true;
    }
    if (ok) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (auto i : v) {
            x = i;
            for (int j = 0; j < mn; j++) cout << "1" << " ";
            while (x--) {
                cout << p << " ";
                p++;
            }
            cout << endl;
            p = 1;
        }
    }
    return 0;
}