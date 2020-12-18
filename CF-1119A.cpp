#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, mx = 0, w = 0; cin >> n;
   int ar[n];

   for (int i = 0; i < n; i++) cin >> ar[i];
   int end = ar[n - 1];
   int start = ar[0];
   for (int i = 0; i < n; i++) {
      if (start != ar[n - 1 - i]) mx = max(mx, n - 1 - i);
      if (end != ar[i]) mx = max(mx, n - 1 - i);
   }
   cout << mx << endl;
}