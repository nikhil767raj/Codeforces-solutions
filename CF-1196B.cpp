#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, odd = 0; cin >> n >> k;
        vector < int > v, vn;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            if (elem % 2 == 1) odd++;
            v.push_back(elem);
        }
        if (odd < k || ((k % 2 != odd % 2))) {cout << "NO" << endl; continue;}
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            if (k == 1) break;
            if (v[i] % 2 == 1) {
                cout << i + 1 << " ";
                k--;
            }
        }
        cout << n << endl;
    }

}