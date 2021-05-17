#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int T; cin >> T;
   while (T--) {
      int n, idx; cin >> n;
      bool ok = true, ck = true;
      vector < int > v;
      vector < int > vt;
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
         vt.push_back(elem);
      }
      sort(vt.begin(), vt.end());
      // for(auto i:vt) cout << i << " "; cout << endl;
      for (int i = 0; i < n; i++) {
         if (v[i] == vt[i]) continue;
         else {
            ok = false;
            break;
         }
      }
      if (ok) {
         cout << 0 << endl;
         continue;
      }
      if (v[0] == 1) {
         cout << 1 << endl;
         continue;
      }
      else {
         if (v[n - 1] == 1) {
            if (v[0] != n) {
               cout << 2 << endl;
            }
            else {
               cout << 3 << endl;
            }
         }
         else {
            if (v[n - 1] == n) {
               cout << 1 << endl;
            }
            else {
               cout << 2 << endl;
            }
         }
      }
   }
   return 0;
}