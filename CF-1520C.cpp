#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int ar[n][n];
      ll k = 1;
      if (n == 1) {
         cout << 1 << endl;
         continue;
      }
      else if (n == 2) {
         cout << "-1" << endl;
         continue;
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            ar[i][j] = k;
            k = k + 2;
            if (k > n * n) {
               k = 2;
            }
         }
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            cout << ar[i][j] << " ";
         }
         cout << endl;
      }
   }
}