#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int ar[n];
      for (int i = 0; i < n; i++) cin >> ar[i];
      for (int i = 0; i < n; i++) {
         int x = 1;
         while (x * 2 < ar[i]) {
            x = x * 2;
         }
         cout << x << " ";

      }
      cout << endl;
   }
}