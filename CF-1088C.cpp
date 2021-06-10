#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   ll n; cin >> n;
   ll ar[n + 1];
   for (ll i = 1; i <= n; i++) {
      cin >> ar[i];
      ar[i] += 100000;
   }
   cout << n + 1 << endl;
   cout << 1 << " " << n << " " << 100000 << endl;
   for (ll i = 1; i <= n; i++) {
      cout << 2 << " " << i << " " << ar[i] - i << endl;
      ar[i] = (ar[i]) % (ar[i] - i);
   }
   return 0;
}