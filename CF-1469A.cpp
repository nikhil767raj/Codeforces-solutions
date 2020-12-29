#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      string s; cin >> s;
      bool ok = true;
      int pos = 0, q = 0;
      if (s[0] == ')' || s[s.length() - 1] == '(') {cout << "NO" << endl; continue;}
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '(') pos++;
         else if (s[i] == ')') pos--;
         else if (s[i] == '?') q++;
         if (pos < 0 && q == 0) {
            cout << "NO" << endl;
            ok = false;
            break;
         }
      }
      if (ok == false) continue;
      if (q == 0) {
         if (pos == 0) cout << "YES" << endl;
         else cout << "NO" << endl;
      }
      else {
         if ((pos + q) % 2 == 0) cout << "YES" << endl;
         else cout << "NO" << endl;
      }

   }
}