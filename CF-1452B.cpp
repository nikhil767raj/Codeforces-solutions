#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, sum = 0; cin  >> n;
      vector < int > v;
      for (int i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         sum += elem;
      }
      sort(v.begin(), v.end(), greater<ll>());
      ll mx = v[0];
      mx = mx * (n - 1);
      if (sum <= mx) {
         cout << mx - sum << endl;
      }
      else {
         ll x = ceil((sum * 1.0) / (n - 1));
         ll y = x * (n - 1);
         // cout << "y" << " " << y << endl;
         cout << y - sum << endl;
      }
   }
}