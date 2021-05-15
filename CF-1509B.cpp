#include<bits/stdc++.h>
using namespace std;
int main() {
   int T; cin >> T;
   while (T--) {
      int n, inc = 0, dec = 0, mid = 0; cin >> n;
      string s; cin >> s;
      bool ok = true;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == 'M') mid++;
      }
      if (n / 3 != mid) {
         cout << "NO" << endl;
         continue;
      }
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == 'T') inc++;
         else dec++;
         if (dec > inc) {
            ok = false;
            break;
         }
      }
      inc = 0;
      dec = 0;
      for (int i = s.length() - 1; i >= 0; i--) {
         if (s[i] == 'T') inc++;
         else dec++;
         if (dec > inc) {
            ok = false;
            break;
         }
      }
      if (ok) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
   return 0;
}