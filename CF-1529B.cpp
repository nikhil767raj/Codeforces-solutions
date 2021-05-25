#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int nn, mn = INT_MAX, inc = 0, cnt = 0; cin >> nn;
      vector < int > v, p, n;
      for (int i = 0; i < nn; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
         if (elem <= 0) { inc++; n.push_back(elem);}
         else p.push_back(elem);
      }
      if (n.size() != 0) {
         sort(n.begin(), n.end());
         for (int i = 0; i < n.size() - 1; i++) {
            mn = min(mn, abs(n[i] - n[i + 1]));
         }
      }
      sort(p.begin(), p.end());
      for (int i = 0; i < p.size(); i++) {
         if (p[i] <= mn) {cnt++; break;}
      }
      cout << inc + cnt << endl;
   }
}