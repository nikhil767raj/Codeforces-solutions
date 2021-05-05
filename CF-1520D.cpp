#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, total = 0, z; cin >> n;
      map<ll, ll>mp;
      vector< ll> v;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         // vt.push_back(elem-(i+1));
         z = elem - (i + 1);
         mp[z]++;
      }
      for (auto i : mp) {
         z = i.second;
         if (z == 1) continue;
         else {
            total = total + (z * (z - 1) / 2);
         }
      }
      cout << total << endl;
   }
}