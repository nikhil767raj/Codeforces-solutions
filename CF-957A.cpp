#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool ok = false;
    if (n == 1 && s[0] == '?') {
        cout << "YES" << endl; return 0;
    }
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1] && s[i] != '?') {
            cout << "NO" << endl;
            return 0;
        }
        if (i == 0 && s[i] == '?') ok = true;
        if (s[i - 1] == s[i + 1] && s[i] == '?' || s[i] == s[i + 1]) ok = true;

    }
    if ( s[s.length() - 1] == '?') ok = true;
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}