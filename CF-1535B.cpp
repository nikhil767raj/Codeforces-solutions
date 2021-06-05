#include<bits/stdc++.h>
using namespace std;
#define ll    long long int

int main() {
   cin.tie(NULL);
   ll t; cin >> t;
   while (t--) {
      ll n, sum = 0, elem = 0, ev = 0; cin >> n;
      vector < ll > v, vt;
      for (int i = 0; i < n; i++) {
         cin >> elem;
         if (elem % 2 == 0) {ev++; vt.push_back(elem);}
         else v.push_back(elem);
      }
      sum += ev * (n) - (ev * ((ev + 1))) / 2;
      for (ll i = 0; i < v.size(); i++) {
         for (ll j = i + 1; j < v.size(); j++) {
            if (__gcd(v[i], (2 * v[j])) > 1) sum++;
         }
      }
      cout << sum << endl;
   }
}