#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      ll sum = 0;
      ll xsum = 0;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         sum += elem;
         xsum = xsum ^ elem;
      }
      cout << 2 << endl;
      cout << xsum << " " << xsum + sum << endl;
   }
}