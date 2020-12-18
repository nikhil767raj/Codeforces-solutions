#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, x, odd = 0, even = 0; cin >> n >> x;
      int ar[n];
      for (int i = 0; i < n; i++) {
         cin >> ar[i];
         if (ar[i] % 2 == 0)even++;
         else odd++;
      }
      if (even >= x) {
         if (odd >= 1) cout << "YES" << endl;
         else cout << "NO" << endl;

      }
      else {
         if ((x - even) % 2 == 0 ) {
            if (n == x) cout << "NO" << endl;
            else if (odd - 1 >= x - even) {
               if (even > 0)
                  cout << "YES" << endl;
               else
                  cout << "NO" << endl;
            }
            else cout << "NO" << endl;

         }
         else {
            cout << "YES" << endl;
         }
      }
   }
   return 0;
}