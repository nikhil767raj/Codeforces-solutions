#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
   int T; cin >> T;
   while (T--) {
      ll n; cin >> n;
      vector < ll > v, vt;
      vector < ll > pre(n);
      set < ll > s;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         vt.push_back(elem);
      }
      sort(v.begin(), v.end());
      ll strt = v[0];
      ll idx = 0;
      ll sum = v[0];
      for (int i = 1; i < n; i++) {
         if (sum >= v[i]) {
            sum = sum + v[i];

         }
         else {
            sum = sum + v[i];
            idx = i;
         }
      }
      ll num = v[idx];
      for (int i = 0; i < n; i++) {
         if ( vt[i] >= num) {
            s.insert(i + 1);
         }
      }
      cout << s.size() << endl;
      for (auto i : s) cout << i << " "; cout << endl;
   }
   return 0;
}