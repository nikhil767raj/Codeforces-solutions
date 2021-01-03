#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, count = 1; cin >> n;
      int ar[n];
      for (int i = 0; i < n; i++) cin >> ar[i];
      int prev = ar[n - 1];
      ar[n - 1]++;
      prev++;

      for (int i = n - 2; i >= 0; i = i - 1) {
         if (ar[i] != prev) {
            count++;
            if (ar[i] + 1 != prev) {ar[i] = ar[i] + 1; prev = ar[i];}
            else prev = ar[i];
         }
      }
      cout << count << endl;
   }
}