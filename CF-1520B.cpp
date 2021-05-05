#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;
    vector < ll > v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (n <= 9) {
      cout << n << endl;
      continue;
    }
    ll count = 9;
    ll p = 1, k = 1, j = 1, i = 1, z = 0;
    ll ar[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    while (p <= n) {
      for (ll i = 0; i < 9; i++) {
        ar[i] = ar[i] * 10 + j;
        p = ar[i];
        v.push_back(p);
        if (p > n) break;
        j++;
        count++;
      }
      j = 1;
    }
    //  for(auto i:v) cout << i << " "; cout << endl;
    cout << count << endl;
  }
}