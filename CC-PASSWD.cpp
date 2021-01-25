#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    bool ok = false, fault = false, num = false, possible = false;
    if (s.length() < 10) {cout << "NO" << endl; continue;}
    for (int i = 1; i < s.length() - 1; i++) {
      if (islower(s[i])) ok = true;
      else if (isupper(s[i])) fault = true;
      else if (isdigit(s[i])) num = true;
      else if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?') possible = true;
    }
    if (ok && fault && num && possible ) cout << "YES" << endl;
    else if (!ok && fault && num && possible ) {
      if (islower(s[0]) || islower(s[s.length() - 1])) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
  }
}