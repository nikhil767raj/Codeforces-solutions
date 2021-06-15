#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, m, l, r, ld, rd, w, z; cin >> n >> m;
      ll ar[n][m];
      ll ans[n][m];
      ll mid = (n + 1) / 2;
      ll mc = (m + 1) / 2;
      for (ll i = 0; i < n; i++) {
         for (ll j = 0; j < m; j++) {
            cin >> ar[i][j];
         }
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) ans[i][j] = 0;
      }
      ll c = 0, sum = 0;
      for (ll  i = 0; i < n; i++) {
         for (ll c = 0; c < m; c++) {
            vector < ll > v;
            v.push_back(ar[i][c]);
            v.push_back(ar[i][m - (c + 1)]);
            v.push_back(ar[n - (i + 1)][c]);
            v.push_back(ar[n - (i + 1)][m - (c + 1)]);
            sort(v.begin(), v.end());
            // for(auto i:v) cout << i << " "; cout << endl;
            ll mp = (v[1] + v[2]) / 2;
            ans[i][c] = mp;
         }
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            sum += abs(ans[i][j] - ar[i][j]);
         }
      }
      cout << sum << endl;
   }
}