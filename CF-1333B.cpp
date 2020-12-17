#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int ar[n], br[n];
      bool fault = true;
      for (int i = 0; i < n; i++) cin >> ar[i];
      for (int i = 0; i < n; i++) cin >> br[i];
      int pos = 0, neg = 0;
      if (ar[0] != br[0]) { cout << "NO" << endl; continue; }
      for (int i = 0; i < n; i++) {
         if (ar[i] > br[i] && !neg) {
            cout << "NO" << endl;
            fault = false;
            break;
         }
         else if (ar[i] < br[i] && !pos) {
            cout << "NO" << endl;
            fault = false;
            break;
         }
         if (ar[i] == -1) neg = 1;
         if (ar[i] == 1) pos = 1;
      }
      if (fault) cout << "YES" << endl;
   }
}