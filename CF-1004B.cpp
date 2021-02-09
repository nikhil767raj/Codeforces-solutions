#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    bool ok = true;
    while (m--) {
        int x, y; cin >> x >> y;
    }
    for (int i = 0; i < n; i++) {
        if (ok) {
            cout << "0";
            ok = false;
        }
        else {
            cout << "1";
            ok = true;
        }
    }
    cout << endl;
}