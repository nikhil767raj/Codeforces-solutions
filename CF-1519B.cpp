#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, m, k, z, i, j; cin >> n >> m >> k;
      bool ok = true, ck = false;
      int sa = m - 1 + (m * (n - 1));
      int sb = n - 1 + (n * (m - 1));
      if (sa == k || sb == k) {
         cout << "YES" << endl;
      }
      else cout << "NO" << endl;
   }
}