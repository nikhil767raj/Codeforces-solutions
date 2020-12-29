#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, mx1 = 0, mx2 = 0, sum = 0, sm = 0; cin >> n;
      int r[n];
      for (int i = 0; i < n; i++) {
         cin >> r[i];
         sum = sum + r[i];
         mx1 = max(mx1, sum);
      }
      int m; cin >> m;
      int b[m];
      for (int i = 0; i < m; i++) {
         cin >> b[i];
         sm = sm + b[i];
         mx2 = max(sm, mx2);
      }
      cout << mx2 + mx1 << endl;

   }
}