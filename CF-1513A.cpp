#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, k; cin >> n >> k;
      int ar[n + 1];
      if (k > (n + 1) / 2 - 1) {
         cout << "-1" << endl;
         continue;
      }
      int j = 2;
      for (int i = 1; i <= n; i++) ar[i] = i;
      while (k--) {
         swap(ar[j], ar[j + 1]);
         j = j + 2;
      }
      for (int i = 1; i <= n; i++) cout << ar[i] << " ";
      cout << endl;
   }
}