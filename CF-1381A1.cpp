#include<bits/stdc++.h>
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                v.push_back(i + 1);
                v.push_back(1);
                v.push_back(i + 1);
            }
        }
        cout << v.size() << " ";
        for (auto i : v) cout << i << " "; cout << endl;
    }
}