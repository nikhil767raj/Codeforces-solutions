#include<bits/stdc++.h>
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        string s, t, str = ""; cin >> s >> t;
        int k = 0, idx, cnt, w = 0;
        bool ok = false;
        for (int i = 0; i < t.length(); i++) {
            str = str + t[i];
            string p = t.substr(i + 1, t.length());
            k = 0;
            cnt = 0;
            for (int j = 0; j < s.length(); j++) {
                cnt++;
                if (str[k] == s[j]) {
                    k++;
                    if (k == str.length()) {
                        idx = j - 1;
                        j = j - k + 1;
                        k = 0;
                        int x = p.length() - 1;
                        if (x > idx) {
                            k = 0;
                            continue;
                        }
                        int z = idx - p.length() + 1;
                        idx++;
                        string r = s.substr(z, p.length());
                        reverse(r.begin(), r.end());
                        if (r == p) {ok = true; break;}
                    }
                }
                else {
                    j = j - k;
                    k = 0;
                }
            }
            if (ok) break;
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}