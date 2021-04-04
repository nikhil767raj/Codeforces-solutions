#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
  ll n, j = 0; cin >> n;
  vector < ll > v;
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      v.push_back(i);
      v.push_back(n / i);
    }
  }
  bool ok = true;
  sort(v.begin(), v.end(), greater<ll>());
//   for(auto i:v) cout << i << " ";
//   cout << endl;
  for (ll i = 0; i < v.size(); i++) {
    ll x = v[i];
    ok = true;
    for (ll j = 2; j <= sqrt(x); j++) {
      if (x % (j * j) == 0) {ok = false; break;}
      else continue;
    }
    if (ok) {
      ok = false;
      cout << x << endl;
      break;
    }
  }
}