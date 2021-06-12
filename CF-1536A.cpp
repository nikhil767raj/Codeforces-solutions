#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector < int > v;
      bool ok = false;
      set < int > s;
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         s.insert(elem);
         if (elem < 0) ok = true;
      }
      if (ok) {
         cout << "NO" << endl;
         continue;
      }
      cout << "YES" << endl;
      cout << 101 << endl;
      for (int i = 0; i < 101; i++) s.insert(i);

      for (auto i : s) cout << i << " "; cout << endl;
   }
}