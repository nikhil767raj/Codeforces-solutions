#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   ll n, k; cin >> n >> k;
   vector < ll > v;
   for (ll i = 0; i < n; i++) {
      ll elem; cin >> elem;
      v.push_back(elem);
   }
   if (n == 1) {
      cout << v.front() + k << endl;
      return 0;
   }
   sort(v.begin(), v.end());
   ll mid = (v.size() + 1) / 2;
   ll idx = mid - 1;
   if (n == 3) {
      ll x = v.back() - v[idx];
      if (x >= k) {
         cout << v[idx] + k << endl;
         return 0;
      }
      else {
         cout << v[idx] + x + (k - x) / 2 << endl;
         return 0;
      }
   }
   ll cnt = 1, sum = 0;
   for (int i = idx; i < n; i++) {
      sum = (v[i + 1] - v[i]) * cnt;
      if (sum >= k) {
         cout << v[idx] + (k / cnt) << endl;
         return 0;
      }
      else {
         k -= sum;
         v[idx] += (sum / cnt);
         cnt++;
      }
   }
   if (k > 0) {
      cout << v[idx] + (k / (cnt - 1)) << endl;
   }
   else cout << v[idx] << endl;

}