#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
   ll s, b, sum = 0; cin >> s >> b;
   vector < ll > v, vk;
   vector < ll > pre(b);
   vector < pair < ll , ll > > vt;
   for (ll i = 0; i < s; i++) {
      ll elem; cin >> elem;
      v.push_back(elem);
   }
   for (int i = 0; i < b; i++) {
      ll x, y; cin  >> x >> y;
      vt.push_back({x, y});
      vk.push_back(x);
   }
   sort(vt.begin(), vt.end());
   sort(vk.begin(), vk.end());
   // for(auto i:vk) cout << i << " "; cout << endl;
   pre[0] = vt[0].second;
   for (int i = 1; i < b; i++)  pre[i] = vt[i].second + pre[i - 1];

   for (int i = 0; i < s; i++) {
      ll z = v[i];
      ll ub = upper_bound(vk.begin(), vk.end(), z) - vk.begin() - 1;
      if (ub < 0) cout << 0 << " ";
      else cout << pre[ub] << " ";
   }
   cout << endl;
   return 0;
}