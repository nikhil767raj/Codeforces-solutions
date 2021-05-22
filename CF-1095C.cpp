#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
   ll n, k, z, dev, rem; cin >> n >> k;
   ll ar[34];
   for (ll i = 1; i <= 33; i++) ar[i] = pow(2, (i - 1));
   priority_queue < ll > q;
   for (ll i = 1; i <= 33; i++) {
      if (n >= ar[i]) continue;
      else {
         ll c = i - 1;
         while (1) {
            z = ar[c];
            dev = n / z;
            rem = n % z;
            while (dev--) {
               q.push(z);
            }
            if (rem == 0) break;
            c--;
            n = rem;
         }
         if (q.size() > k) {
            cout << "NO" << endl;
            break;
         }
         ll j = q.size();
         while (j != k) {
            ll x = q.top();
            if (x == 1) break;
            q.pop();
            q.push(x / 2);
            q.push(x / 2);
            j++;
         }
         if (j != k) {
            cout << "NO" << endl;
            break;
         }
         cout << "YES" << endl;
         while (!q.empty()) {
            cout << q.top() << " ";
            q.pop();
         }
         break;
         // cout << endl;
      }
   }
}