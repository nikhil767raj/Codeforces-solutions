#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    while (n--) {
        string s, t; cin >> s >> t;
        bool ok = true;
        int j = 0;
        if (t.length() < s.length()) {
            // cout << "NO" << endl;
            ok = false;
        }
        else {
            for (int i = 0; i < t.length(); i++) {
                if (t[i] == s[j]) j++;
                else {
                    if (i == 0 || t[i] != t[i - 1]) {
                        // cout << "NO" << endl;
                        ok = false;
                        break;
                    }
                }
            }

        }
        if (j < s.length()) ok = false;
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}