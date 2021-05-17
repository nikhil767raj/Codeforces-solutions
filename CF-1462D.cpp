#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, sum = 0, ans = 0; cin >> n;
      vector < int > v(n);
      for (auto &i : v) {cin >> i; sum += i;}
      bool ok = true;
      for (int i = 1; i <= n; i++) {
         if (sum % i == 0) {
            int req_sum = sum / i;
            int cur_sum = 0;
            ok = true;
            for (int i = 0; i < n; i++) {
               cur_sum += v[i];
               if (cur_sum > req_sum) {
                  ok = false;
                  break;
               }
               else if (cur_sum == req_sum) {
                  cur_sum = 0;
                  continue;
               }
            }
            if (ok) {ans = n - i;}
            // cout << ans << endl;
         }
         else continue;
      }
      cout << ans << endl;

   }
}