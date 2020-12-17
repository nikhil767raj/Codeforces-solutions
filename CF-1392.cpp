#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      ll ar[n];
      ll ans = 0;
      for (ll i = 0; i < n; i++) cin >> ar[i];
      for (ll i = 0; i < n; i++) {
         if (i == 0) continue;
         else {
            if (ar[i] < ar[i - 1]) ans = ans + (ar[i - 1] - ar[i]);
         }
      }
      cout << ans << endl;
   }
}