#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
bool prime(ll x) {
   for (ll i = 2; i <= sqrt(x); i++)
      if (x % i == 0) return false;
   return true;
}
int main() {
   ll p, y; cin >> p >> y;
   bool ok = true;
   for (ll i = y; i > p; i--) {
      ok = true;
      if (prime(i)) {
         cout << i << endl;
         return 0;
      }
      for (ll j = 2; j <= p; j++) {
         if (i % j != 0) continue;
         else {
            ok = false;
            break;
         }
      }
      if (ok) {cout << i << endl; return 0;}
   }
   cout << "-1" << endl;
}