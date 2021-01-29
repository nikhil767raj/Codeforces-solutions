#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int zero = 0, one = 0;
        string s; cin >> s;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '0') zero++;
            if (s[i] == '1' && s[i + 1] == '1') one++;
        }
        cout << max(zero, one) << endl;

    }

    return 0;
}