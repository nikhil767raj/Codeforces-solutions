#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, k; cin >> n >> k;
      set < int > s;
      for (int i = 0; i < n; i++) {
         int x; cin >> x;
         s.insert(x);
      }
      if (s.size() > k) {
         cout << "-1" << endl;
         continue;
      }
      cout << n*k << endl;
      for (int j = 0; j < n; j++) {
         for (auto i : s) cout << i << " ";
         for (int p = 0; p < (k - s.size()); p++) cout << 1 << " ";
      }
      cout << endl;
   }

}