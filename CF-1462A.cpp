#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, j = 0, i; cin >> n;
      int ar[n];
      int arr[n];
      bool ok = true;
      bool check = true;
      int y = n - 1, p, q = 0, k = n - 2;
      for (int i = 0; i < n; i++) cin >> ar[i];
      if (n % 2 == 0) {
         for (int i = 0; i < n; i++) {

         }
      }
      for (int i = 0; i < n; i++) {
         if (ok) {
            if (i >= n / 2 && n % 2 == 1) ok = false;
            else if (n % 2 == 0 && i >= n / 2 - 1) ok = false;
            arr[j] = ar[i];
            // ok=false;
            j = j + 2;

         }
         else {
            if (n % 2 == 1) {
               arr[k] = ar[i];
               k = k - 2;
            }
            else {
               arr[y] = ar[i];
               y = y - 2;
            }
         }


      }
      for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
}