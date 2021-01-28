#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
int main() {
    string s; cin >> s;
    int k, count = 0, inc = 0; cin >> k;
    bool ok = true;
    if (s.length() <= k) {cout << s.length() - 1 << endl; return 0;}
    for (int i = s.length() - 1; i >= 0; i = i - 1) {

        if (s[i] != '0') count++;
        else inc++;
        if (inc == k) {ok = false; break;}
    }
    if (ok == false) cout << count << endl;
    else cout << s.length() - 1 << endl;

}