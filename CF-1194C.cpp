#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
    int t; cin >> t;
    while (t--) {
        int fp[26] = {0};
        string s, p, t; cin >> s >> t >> p;
        for (int i = 0; i < p.length(); i++) fp[p[i] - 'a']++;

        int j = 0;
        bool ok = true;
        for (int i = 0; i < t.length(); i++) {
            if (j >= s.length()) {
                if (fp[t[i] - 'a'] > 0) {fp[t[i] - 'a']--;}
                else {
                    ok = false;
                    break;
                }
                continue;
            }
            if (t[i] == s[j]) { j++;}
            else {
                if (fp[t[i] - 'a'] > 0)fp[t[i] - 'a']--;
                else {
                    ok = false;
                    break;
                }
            }
        }
        if (ok && j >= s.length()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}