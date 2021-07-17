#include<bits/stdc++.h>
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        int n, a, b, sum = 0; cin >> n >> a >> b;
        string s; cin >> s;
        int k = s.length();
        if (b >= 0) cout << k*a + k*b << endl;
        else {
            string t = "";
            int one = 0, z = 0;
            for (int i = 0; i < s.length() - 1; i++) if (s[i] != s[i + 1]) t = t + s[i];
            t = t + s.back();
            for (int i = 0; i < t.length(); i++) {
                if (t[i] == '0') z++;
                else one++;
            }
            int ans = min(z, one) + 1;
            cout << n*a + ans*b << endl;
        }
    }
}