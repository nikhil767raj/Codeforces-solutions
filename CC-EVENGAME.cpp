#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, ev = 0, od = 0; cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if (ar[i] % 2 == 0) ev++;
            else od++;
        }
        if (ev == n) cout << "1" << endl;
        else if (od == n) {
            if (n % 2 == 0) {
                cout << "1" << endl;
            }
            else {
                cout << "2" << endl;
            }
        }
        else {
            if (od % 2 == 1) cout << "2" << endl;
            else cout << "1" << endl;
        }
    }
}