#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, mx = -1; cin >> n;
      vector < ll > v;
      unordered_map<ll, ll>mp;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         mp[elem]++;
         mx = max(mx, mp[elem]);
      }
      if (n % 2 == 0) {
         if (mx > n / 2) {
            cout << mx - (n - mx) << endl;
         }
         else  cout << "0" << endl;
      }
      else {
         if (mx >= (n + 1) / 2) {
            cout << mx - (n - mx) << endl;
         }
         else {
            cout << 1 << endl;
         }

      }

   }
}