#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, count = 0, pre = 0, pos = 0, inc = 0; cin >> n >> k;
        string s; cin >> s;
        int z = 2 * k + 1;
        vector < int > v;
        bool ok = false, check = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                v.push_back(i + 1);
                break;
            }
        }
        if (v.size() == 0) {
            if (n == k) {
                cout << 1 << endl;
                continue;
            }
            else {s[0] = '1'; count++;}
        }
        for (int i = 0; i < s.length(); i++) {
            if (ok) {
                if (s[i] == '0') {
                    if (check) {
                        pre++;
                        if (pre == z) {pre = 0; count++; check = false; continue;}
                    }
                    else {
                        pos++;
                        if (pos == k + 1) {pos = 0; count++;}
                    }
                }
                else { pre = 0; pos = 0; check = true; continue;}
                continue;
            }
            if (s[i] == '1') {
                ok = true;
                if (inc > k) count = count + (inc / (k + 1));
            }
            else inc++;
        }
        if (pre >= k + 1 || pos != 0) count++;
        cout << count << endl;
    }
}