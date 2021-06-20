#include<bits/stdc++.h>
using namespace std;
#define ll     long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      vector < ll > v;
      vector < ll > vt(n);
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
      }
      sort(v.begin(), v.end());
      ll strt = 0, end = 0, mn = INT_MAX;
      for (ll i = 1; i < n; i++) {
         if (mn > v[i] - v[i - 1]) {
            mn = v[i] - v[i - 1];
            strt = i - 1;
            end = i;
         }
      }
      vt[0] = v[strt];
      vt[n - 1] = v[end];
      int j = 1;
      for (int i = end + 1; i < n; i++) {
         vt[j] = v[i];
         j++;
      }
      for (int i = 0; i < strt; i++) {
         vt[j] = v[i];
         j++;
      }
      for (auto i : vt) cout << i << " "; cout << endl;
   }
}