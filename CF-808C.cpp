#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, total = 0, sum = 0, w; cin >> n >> w;
   vector < int > vt;
   vector < pair < int , int >  > v;
   for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      vt.push_back(elem);
      total += elem;
      v.push_back({elem, (elem + 1) / 2});
      sum += (elem + 1) / 2;
   }
   sort(v.begin(), v.end());
   reverse(v.begin(), v.end());
   if (total < w || sum > w) {
      cout << "-1" << endl;
      return 0;
   }
   w -= sum;
   // cout << "W" << " " << w << endl;
   total = 0;
   // for(auto i:v) cout << i.first << " " << i.second << endl;

   for (int i = 0; i < n; i++) {
      int x = v[i].first;
      if (w > 0) {
         // cout << x << "mmm" << x-v[i].second << endl;
         int mn = min(w, x - v[i].second);
         v[i].second += mn;
         // cout << w << " " << x-v[i].second << endl;
         w -= mn;
         // cout << w << endl;
      }
      else break;
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (vt[i] == v[j].first) {
            cout << v[j].second << " "; v[j].first = -1; break;
         }
      }
   }
   cout << endl;
   return 0;
}
