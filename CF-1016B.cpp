#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, q, zz, jump = 0, z, ck = 0, yk = 0, k, i;
    cin >> n >> m >> q;
    bool ok = true, check = false;
    vector < pair <int, int> > vt;
    string s, t; cin >> s >> t;
    for (int k = 0; k < s.length(); k++) {
        i = k;
        for (int j = 0; j < t.length(); j++) {
            yk++;
            if (s[i] == t[j]) {
                if (ok) { ok = false; zz = i; z = zz;}
                else z = i;
                i++;
            }
            else {
                if (!ok) i--;
                ok = true;
                break;
            }
        }
        if (ok == false) {vt.push_back( make_pair(zz, z) ); jump++; i--; ok = true; continue;}
        // i=zz+1;
    }
    if (vt.size() == 0) check = true;
    // for(auto i:vt) cout << i.first << " " << i.second << endl;
    while (q--) {
        int x, y, inc = 0; cin >> x >> y;
        x = x - 1;
        y = y - 1;
        if (check) {cout << "0" << endl;}
        else {
            for (auto i : vt) {
                if (i.first >= x && y >= i.second) inc++;
                else continue;
            }
            cout << inc << endl;
        }
    }
    return 0;
}