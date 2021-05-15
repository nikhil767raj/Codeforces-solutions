#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
   int T; cin >> T;
   while (T--) {
      ll n, mx = INT_MIN, elem; cin >> n;
      vector < ll > u, s;
      map < ll, vector < ll> > mp;
      for (ll i = 0; i < n; i++) {
         cin >> elem;
         u.push_back(elem);
      }
      for (ll i = 0; i < n; i++) {
         cin >> elem;
         mp[u[i]].push_back(elem);
      }
      vector <vector<ll>> v;
      vector < ll > ans(n, 0);
      for (auto i : mp) {
         v.push_back(i.second);
         sort(v.back().begin(), v.back().end());
      }
      vector <vector<ll>> ot;
      for (auto i : v) {
         vector < ll > vt;
         for (int j = 0; j < (ll)i.size(); j++) {
            if (j == 0) vt.push_back(i[j]);
            else vt.push_back(vt.back() + i[j]);
         }
         ot.push_back(vt);
      }
      for (auto i : ot) {
         for (int j = 1; j <= (ll)i.size(); j++) {
            ll left = (int)i.size() % j;
            ll del = 0;
            if (left > 0) del = i[left - 1];
            ans[j - 1] = ans[j - 1] + (i.back() - del);
         }
      }
      for (auto i : ans) cout << i << " "; cout << endl;
   }
   return 0;
}