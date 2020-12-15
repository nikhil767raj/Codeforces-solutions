#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
   ll q; cin >> q;
   while (q--) {
      ll c, m, x, mn = 0; cin >> c >> m >> x;
      if (c == 0 || m == 0) {
         cout << "0" << endl;
      }
      else {
         if (c == m && x >= m) cout << m << endl;
         else if (c == m && m > x) {
            mn = min(min(c, m), x);
            c = c - mn;
            m = m - mn;
            if (c == 0 || m == 0) cout << mn << endl;
            else {
               if (min(c, m) * 2 <= max(c, m))
                  cout << mn + min(c, m) << endl;
               else
                  cout << mn + (c + m) / 3 << endl;
            }

         }
         else {
            mn = min(min(c, m), x);
            c = c - mn;
            m = m - mn;
            if (c == 0 || m == 0) cout << mn << endl;
            else {
               if (min(c, m) * 2 <= max(c, m))
                  cout << mn + min(c, m) << endl;
               else
                  cout << mn + (c + m) / 3 << endl;

            }

         }
      }

   }
}