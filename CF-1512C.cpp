#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, pr = 0; cin >> a >> b;
        string s; cin >> s;
        int n = s.length();
        bool ok = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') a--;
            else if (s[i] == '1') b--;
        }
        if (a < 0 || b < 0) {
            cout << -1 << endl;
            continue;
        }
        if (n == 1 && (a == 0 && b == 1 || b == 0 && a == 1)) {
            if (a == 0) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] == '0') {
                if (s[n - (i + 1)] == '1') {
                    ok = false;
                    break;
                }
                else if (s[n - (i + 1)] == '0') continue;
                else if (s[n - (i + 1)] == '?') {
                    if (a > 0) {s[n - (i + 1)] = '0'; a--;}
                    else {
                        ok = false;
                        break;
                    }
                }
            }
            else if (s[i] == '1') {
                // cout << "PP" << endl;
                if (s[n - (i + 1)] == '0') {
                    ok = false;
                    break;
                }
                else if (s[n - (i + 1)] == '1') continue;
                else if (s[n - (i + 1)] == '?') {
                    // cout << "u" << endl;
                    if (b > 0) {s[n - (i + 1)] = '1'; b--;}
                    else {
                        ok = false;
                        break;
                    }
                }
            }
            else {
                if (s[n - (i + 1)] == '0') {
                    if (a > 0) {s[i] = '0'; a--;}
                    else {
                        ok = false;
                        break;
                    }
                }
                else if (s[n - (i + 1)] == '1') {
                    if (b > 0) {s[i] = '1'; b--;}
                    else {
                        ok = false;
                        break;
                    }
                }
                else pr = pr + 2;
            }
        }
        if (!ok) cout << "-1" << endl;
        else {
            if (s.length() % 2 != 0) {
                if (a % 2 != 0) {s[n / 2] = '0'; a--;}
                else if (b % 2 != 0) {s[n / 2] = '1'; b--;}
            }
            if (a % 2 == 0 && b % 2 == 0 && (a + b) == pr) {
                for (int i = 0; i < s.length() / 2; i++) {
                    if (s[i] == '?') {
                        if (a > 0) {
                            s[i] = '0';
                            s[n - (i + 1)] = '0';
                            a = a - 2;
                        }
                        else if (b > 0) {
                            s[i] = '1';
                            s[n - (i + 1)] = '1';
                            b = b - 2;
                        }

                    }
                }
                cout << s << endl;

            }
            else cout << "-1" << endl;
        }
    }
}
