#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, k; cin >> n >> k;
      int ar[n];
      bool ok = true;
      for (int i = 0; i < n; i++) {
         if (ok) {
            ar[i] = i + 1;
            ok = false;
         }
         else {
            ar[i] = (i + 1) * -1;
            ok = true;
         }
      }
      double x = (double)n / 2;
      int z = ceil(x);
      // cout << z << endl;
      for (int i = n - 1; i >= 0; i = i - 1) {
         if (z < k) {
            if (ar[i] < 0) {
               ar[i] = -ar[i];
               z++;
            }
         }
         else {
            if (ar[i] > 0) {
               ar[i] = -ar[i];
               k++;
            }
         }
         if (z == k) break;
      }
      for (int i = 0; i < n; i++) cout << ar[i] << " ";
      cout << endl;
   }
}