#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll r, b, d; cin >> r >> b >> d;
      if (r == 0 || b == 0) {
         cout << "NO" << endl;
         continue;
      }
      else if (r == b && abs(r - b) <= d) {
         cout << "YES" << endl;
         continue;
      }
      else {
         ll mx = max(r, b);
         ll mn = min(r, b);
         if (mx / (d + 1) == mn ) {
            if (mx % (d + 1) == 0)
               cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
         }
         else if (mx / (d + 1) > mn) {
            cout << "NO" << endl;
            continue;
         }
         else {
            cout << "YES" << endl;
         }

      }

   }
}