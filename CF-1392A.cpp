#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int ar[n];
      bool ok = true;
      for (int i = 0; i < n; i++) cin >> ar[i];
      // cout << "m" << endl;
      for (int i = 0; i < n; i++) {
         // cout << "L" << endl;
         if (i == 0)continue;
         else if (ar[i] != ar[i - 1]) {
            ok = false;
            cout << "1" << endl;
            break;
         }
      }
      if (ok) cout << n << endl;
   }
   return 0;
}