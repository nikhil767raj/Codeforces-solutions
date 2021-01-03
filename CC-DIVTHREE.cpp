#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, k, d, sum = 0; cin >> n >> k >> d;
      ll ar[n];
      for (ll i = 0; i < n; i++) {
         cin >> ar[i];
         sum = sum + ar[i];
      }
      ll z = sum / k;
      if (z >= d) cout << d << endl;
      else cout << z << endl;
   }
}