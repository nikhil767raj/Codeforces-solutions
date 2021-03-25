#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, a = -1e6, b = 1e9; cin >> n;
        while (n--) {
            int x, y; cin >> x >> y;
            a = max(x, a);
            b = min(b, y);
        }
        cout << max(0, a - b) << endl;
    }
}