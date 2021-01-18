#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      bool ok = false;
      int n, d; cin >> n >> d;
      int ar[n];
      for (int i = 0; i < n; i++) cin >> ar[i];
      sort(ar, ar + n, greater<int>());
      if (ar[0] <= d) { cout << "YES" << endl; continue;}
      for (int i = 0; i < n - 1; i++) {
         for (int j = i + 1; j < n; j++) {
            if ((ar[i] + ar[j]) <= d && (ar[i] < d && ar[j] < d)) {
               ok = true;
               break;
            }
         }
      }
      if (ok) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}