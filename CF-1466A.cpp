#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, count = 0, k; cin >> n;
      int ar[n], arr[10000] = {0};
      for (int i = 0; i < n; i++) cin >> ar[i];
      for (int i = 0; i < n - 1; i++) {
         for (int j = i + 1; j < n; j++) {
            k = abs(ar[i] - ar[j]);
            arr[k] = k;
            // cout << arr[k] << " ";/
         }
      }
      for (int i = 0; i < 100; i++) {
         if (arr[i] == 0) continue;
         else {
            count++;
         }
      }
      cout << count << endl;
   }
}