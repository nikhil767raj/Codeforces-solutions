#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, idx; cin >> n;
      int y = n;
      int ar[15];
      for (int i = 0; i < 15; i++) ar[i] = pow(3, i);

      bool ok = true;
      int j = 0, ans;
      while (n  != 0) {
         n = y + j;
         ans = y + j;
         j++;
         for (int i = 14; i >= 0; i--) {
            if (ar[i] <= n) {
               n -= ar[i];
               if (ok) {
                  idx = i;
                  ok = false;
               }
            }
            if (n == 0) break;
         }
      }
      cout << ans << endl;

   }
}