#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        map < char , int > mp;
        int cnt = 0, inc = 0;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        for (auto i : mp) {
            if (i.second >= 2) {
                cnt++;
            }
            else inc++;
        }
        cout << cnt + inc / 2 << endl;
    }
}