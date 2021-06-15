#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, m, row, col; cin >> n >> m;
   char x;
   vector < pair < int , int > > v;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
         cin >> x;
         if (x == '*')  v.push_back({i, j});
      }
   }
   bool ok = true;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
         row = i; col = j;
         ok = true;
         for (int k = 0; k < v.size(); k++) {
            if (row == v[k].first || col == v[k].second) continue;
            else {
               ok = false;
               break;
            }
         }
         if (ok) {
            cout << "YES" << endl;
            cout << row << " " << col << endl;
            return 0;
         }
      }
   }
   cout << "NO" << endl;
   return 0;
}