#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      vector < ll > v;
      int k = 2 * n;
      for (ll i = 0; i < k; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
      }
      sort(v.begin(), v.end());
      for (ll i = 1; i < k - 2; i = i + 2) {
         swap(v[i], v[i + 1]);
      }
      for (auto i : v) cout << i << " "; cout << endl;

   }
}