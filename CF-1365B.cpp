#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, z = 0, o = 0, elem; cin >> n;
      bool ok = true;
      vector < int > v, vt, vk;
      for (int i = 0; i < n; i++) {
         cin >> elem;
         v.push_back(elem);
         vk.push_back(elem);
      }
      sort(vk.begin(), vk.end());
      for (int i = 0; i < n; i++) {
         cin >> elem;
         vt.push_back(elem);
         if (elem == 0) z++;
         else o++;
      }
      for (int i = 0; i < n; i++) {
         if (vk[i] == v[i]) continue;
         else {
            ok = false;
            if (z != 0 && o != 0) ok = true;
            else ok = false;
            break;
         }
      }
      if (ok) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}