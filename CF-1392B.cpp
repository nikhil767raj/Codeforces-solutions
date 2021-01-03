#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, k; cin >> n >> k;
      ll ar[n];
      for (ll i = 0; i < n; i++) cin >> ar[i];
      // if( n == 1) {cout << "0" << endl; continue;}

      if (k % 2 == 1) {
         ll z = *max_element(ar, ar + n);
         for (ll i = 0; i < n; i++) cout << z - ar[i] << " ";
         cout << endl;
      }
      else {
         ll x = *max_element(ar, ar + n);
         for (ll i = 0; i < n; i++) ar[i] = x - ar[i];
         ll y = *max_element(ar, ar + n);
         for (ll i = 0; i < n; i++) {
            cout << y - ar[i] << " ";
         }
         cout << endl;
      }
   }
}