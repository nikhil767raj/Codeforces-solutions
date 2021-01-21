#include<bits/stdc++.h>
using namespace std;
#define  ll      long long int

bool cmp(const pair<int, int> &a,
         const pair<int, int> &b)
{
   return (a.second < b.second);
}
int main() {
   int t; cin >> t;
   while (t--) {
      int n, z = 0, y, ans = 0, mn = 1e9; cin >> n;
      vector< ll > v;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
      }
      v.erase(unique(v.begin(), v.end()), v.end());

      // for(auto i:v) cout << i << " ";
      // cout << endl;
      map<int , int>mp;
      for (ll i = 0; i < v.size(); i++) {
         mp[v[i]]++;
      }
      for (auto &i : v) {
         // if(i == v.front()) z--;
         // if(i == v.back()) z--;
         mn = min(mn, mp[i] + 1 - (v.front() == i) - (v.back() == i));
         // cout << mn << " ";
      }
      // cout << endl;
      // cout << v[mn] << endl;
      cout << mn << endl;
   }
   return 0;
}