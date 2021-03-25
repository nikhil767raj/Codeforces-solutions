#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0; cin >> n;
    string s; cin >> s;
    vector < int > v;
    bool ok = false, ck = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            ck = true;
            cnt++;
            if (ok) {
                ok = false;
                v.pop_back();
            }
        }
        else {
            ck = false;
            if (cnt  != 0) v.push_back(cnt);
            cnt = 0;
            v.push_back(cnt);
            ok = true;
        }
    }
    if (ck) v.push_back(cnt);
    for (auto i : v) cout << i;
}