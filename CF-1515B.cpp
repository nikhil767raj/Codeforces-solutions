#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
bool power(ll x)
{
   return (x & (x - 1)) == 0;
}
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      ll z = n / 2;
      ll x = sqrt(z);
      ll p = n / 4;
      ll y = sqrt(p);
      if (n % 2 != 0) {
         cout << "NO" << endl;
         continue;
      }
      else if (x * x == z) {
         cout << "YES" << endl;
      }
      else if (n % 4 != 0) {
         cout << "NO" << endl;
      }
      else if (y * y == p) {
         cout << "YES" << endl;
      }
      else cout << "NO" << endl;
   }
}