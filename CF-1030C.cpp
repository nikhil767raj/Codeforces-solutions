#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0, y = 0; cin >> n;
    string s; cin >> s;
    int k = s.length();
    for (int i = 0; i < k; i++) {
        if (s[i] == '0') {
            s.erase(i, 1);
            k--;
            i--;
        }
    }
    if (k == 1) {
        cout << "NO" << endl;
    }
    else if (k == 0) cout << "YES" << endl;
    else {
        bool ok = true;
        for (int i = 0; i < s.length(); i++) {
            x = x + (s[i] - '0');
            y = 0;
            for (int j = i + 1; j < s.length(); j++) {
                y = y + (s[j] - '0');
                if (x == y) {
                    y = 0;
                    ok = true;
                }
                else {
                    ok = false;
                }
            }
            if (ok) break;
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}