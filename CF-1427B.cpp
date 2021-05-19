#include<bits/stdc++.h>
using namespace std;
int main() {
   int T; cin >> T;
   while (T--) {
      int n, k, inc = 0, lost = 0, won = 0, w = 0; cin >> n >> k;
      string s; cin >> s;
      vector < int > v;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == 'W') {
            w++;
            if (i != 0 && s[i - 1] == 'W') won += 2;
            else won++;
         }
         else lost++;
      }
      if (k == 0) {
         cout << won << endl; continue;
      }
      if (lost == s.length()) {
         cout << (k - 1) * 2 + 1 << endl; continue;
      }
      if (k + w >= n) {
         cout << (n - 1) * 2 + 1 << endl; continue;
      }
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == 'L') {
            inc++;
         }
         else {
            if (inc == 0) continue;
            v.push_back(inc);
            inc = 0;
         }
      }
      if (inc != 0) v.push_back(inc);
      if (s.front() == 'L') v.erase(v.begin());
      if (s.back() == 'L')  v.erase(v.begin() + v.size() - 1);
      int z = v.size();
      sort(v.begin(), v.end());
      bool ok = false;
      int sum = 0;
      for (int i = 0; i < z; i++) {
         if (v[i] + sum > k) {
            cout << k * 2 + won + i << endl;
            ok = true;
            break;
         }
         else sum += v[i];
      }
      if (ok) continue;
      cout << z + won + k * 2 << endl;
   }
}