#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, m; cin >> n >> m;
      string s; cin >> s;
      int z = min(n, m);
      while (z--) {
         vector < int > v;
         for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') continue;
            else if (i == 0) {
               if (s[i] == '0' && s[i + 1] == '1') {
                  v.push_back(i);
               }
            }
            else if (i == n - 1) {
               if (s[n - 2] == '1') v.push_back(i);
            }
            else {
               if (s[i - 1] == '0' && s[i + 1] == '1' || s[i - 1] == '1' && s[i + 1] == '0') v.push_back(i);
            }
         }
         for (int i = 0; i < v.size(); i++) s[v[i]] = '1';
      }
      cout << s << endl;
   }
}