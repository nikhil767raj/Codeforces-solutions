#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int kk = 2 * n;
      bool ok = true;
      vector < int > ev, od;
      vector < int > v;
      for (int i = 0; i < kk; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
         if (elem % 2 == 0)  ev.push_back(i + 1);
         else od.push_back(i + 1);
      }
      int z = n - 1, j = 0, k = 0, inc = 0;
      if (ev.size() != 0) {
         for (int j = 0; j < ev.size() - 1; j = j + 2) {
            inc++;
            if (z  < inc) {ok = false; break;}
            cout << ev[j] << " " <<  ev[j + 1] << endl;
         }
      }
      if (ok) {
         z = z - inc;
         inc = 0;
         for (int j = 0; j < od.size() - 1; j = j + 2) {
            inc++;
            if (z  < inc ) break;
            cout << od[j] << " " <<  od[j + 1] << endl;
         }
      }
   }
}