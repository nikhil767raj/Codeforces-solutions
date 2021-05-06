#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, x, total = 0, sum = 0; cin >> n >> x;
      vector < ll > v;
      bool ok = false;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         total = total + elem;
      }
      // cout << total << endl;
      if (total == x) {
         cout << "NO" << endl;
         continue;
      }
      sort(v.begin(), v.end(), greater<ll>());
      if (x < v[0]) {
         cout << "YES" << endl;
         for (auto i : v) cout << i << " "; cout << endl;
         continue;
      }
      else if (x == v[0]) {
         if (v.size() == 1) {
            cout << "NO" << endl;
            continue;
         }
         swap(v[0], v[1]);
         cout << "YES" << endl;
         for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;
         continue;
      }
      else if (x > v[0]) {
         for (int i = 0; i < v.size(); i++) {
            sum = sum + v[i];
            if (sum == x) {
               if (i == v.size() - 1) {
                  ok = true;
                  break;
               }
               else {
                  swap(v[i], v[i + 1]);
                  break;
               }
            }
            else continue;
         }
         if (ok) cout << "NO" << endl;
         else {
            cout << "YES" << endl;
            for (auto i : v) cout << i << " "; cout << endl;
         }
      }
   }
}