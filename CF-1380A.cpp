#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int ar[n];
      for (int i = 0; i < n; i++) cin >> ar[i];
      bool ok = false;
      int rdx = 0, ldx = 0;
      for (int i = 1; i < n - 1; i++) {
         ldx = 0, rdx = 0;
         for (int j = 0; j < i; j++) {
            if (ar[j] < ar[i]) { rdx = j + 1; break; }
         }
         for (int j = i + 1; j < n; j++) {
            if (ar[j] < ar[i]) { ldx = j + 1; break;}
         }
         if (rdx != 0 && ldx != 0) {
            cout << "YES" << endl;
            cout << rdx << " " << i + 1 << " " << ldx << endl;
            ok = true;
            break;
         }
      }
      if (ok == false) cout << "NO" << endl;
   }
}