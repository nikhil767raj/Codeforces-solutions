#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a') {
                j = i;
                break;
            }
        }
        if (s[j] != 'a') {
            cout << "NO" << endl;
            continue;
        }
        char ch = 'b';
        bool ok = true;
        int pre = j, pro = j;
        while (pre > 0 || pro < s.length() - 1) {
            if (pre > 0 && s[pre - 1] == ch) {
                pre--;
                ch++;
            }
            else if (pro < s.length() - 1 && s[pro + 1] == ch) {
                pro++;
                ch++;
            }
            else {
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}