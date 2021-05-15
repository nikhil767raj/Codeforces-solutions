#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int T; cin >> T;
   while (T--) {
      ll n; cin >> n;
      vector < ll > v, vt;
      map < ll , ll > mp;
      priority_queue < ll > q;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         mp[elem]++;
      }
      for (auto i : mp)  q.push(i.second);
      while (q.size() >= 2) {
         int x = q.top();
         q.pop();
         int y = q.top();
         q.pop();
         x--;
         y--;
         if (x) q.push(x);
         if (y) q.push(y);
      }
      if (q.size() == 0) cout << 0 << endl;
      else cout << q.top() << endl;

   }
   return 0;
}