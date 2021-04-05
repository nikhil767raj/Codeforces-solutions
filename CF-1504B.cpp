#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
    int t; cin >> t;
    while (t--) {
        int n, zero = 0, one = 0; cin >> n;
        string a, b; cin >> a >> b;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '0') zero++;
            else one++;
        }
        bool ok = false, ck = true;
        for (int i = n - 1; i >= 0; i--) {
            if (ok) {
                if (a[i] != b[i]) {
                    if (a[i] == '0') one--;
                    else zero--;
                    continue;
                }
                else {
                    ok = false;
                    if (zero == one) {
                        if (a[i] == '0') zero--;
                        else one--;
                    }
                    else {
                        ck = false;
                        break;
                    }
                    continue;
                }
            }
            if (a[i] == b[i]) {
                if (a[i] == '0') zero--;
                else one--;
            }
            else {
                ok = true;
                if (zero == one) {
                    if (a[i] == '0') one--;
                    else zero--;
                }
                else {
                    ck = false;
                    break;
                }
            }
        }
        if (ck) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}