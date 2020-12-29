#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
   ll n, z, count = 0, sum = 0, rem = 0; cin >> n;
   ll ar[n];
   for (ll i = 0; i < n; i++) cin >> ar[i];
   ll x, f; cin >> x >> f;
   for (ll i = 0; i < n; i++) {
      if (ar[i] <= x) continue;
      else {
         // ar[i]=ar[i]-f;
         z = ((double)ar[i] / (f + x));
         rem = ar[i] % (f + x);
         // cout << rem << "PP" << endl;
         if (rem > x) z++;
         if (z == 0) z = 1;
         sum = sum + z * f;
      }
   }
   cout << sum << endl;
}