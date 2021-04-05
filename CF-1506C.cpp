#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string a, b; cin >> a >> b;
        string s = "", x = "";
        int mn = INT_MAX, z = 0;
        for (int i = 0; i < a.length(); i++) {
            x = "";
            for (int j = i; j < a.length(); j++) {
                x = x + a[j];
                // s=s+x;
                // cout << x << endl;
                if (b.find(x) != string::npos) {
                    z = (b.length() - x.length() + a.length() - x.length());
                    mn = min(mn, z);
                }
            }
        }
        if (mn == INT_MAX) {
            mn = a.length() + b.length();
        }
        cout << mn << endl;
    }
}