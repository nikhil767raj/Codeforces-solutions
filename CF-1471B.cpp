#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, x, sum = 0, idx = 0, inc = 0, mn = 1e9; cin >> n >> x;
      vector<ll> v;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         while (elem % x == 0) {
            elem = elem / x;
            inc++;
         }
         if (inc < mn) {
            idx = i;
            mn = inc;
         }
         inc = 0;
      }
      for (ll i = 0; i < v.size(); i++) {
         sum = sum + (v[i] * (mn + 1));
      }
      for (int i = 0; i < idx; i++) {
         sum = sum + v[i];
      }
      cout << sum << endl;
   }
}