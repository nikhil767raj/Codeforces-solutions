#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
   ll n, k, x, i, z = 0; cin >> n >> k >> x;
   vector < ll > v, vt;
   for (ll i = 0; i < n; i++) {
      ll elem; cin >> elem;
      v.push_back(elem);
   }
   sort(v.begin(), v.end());
   for (ll i = 1; i < n; i++) {
      if (v[i] - v[i - 1] <= x) continue;
      else  vt.push_back(v[i] - v[i - 1] - 1);
   }
   sort(vt.begin(), vt.end());
   // for(auto i:vt) cout << i << " "; cout << endl;
   for (ll i = 0; i < vt.size(); i++) {
      ll d = vt[i];
      ll p = d / x;
      k -= p;
      if (k >= 0) continue;
      else {
         z = vt.size() - i;
         break;
      }
   }
   cout << z + 1 << endl;

}