#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int T; cin >> T;
   while (T--) {
      ll n , y; cin >> n >> y;
      vector < ll > v;
      map < ll , ll, greater<ll> > mp;
      for (ll i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         mp[elem]++;
      }
      ll sp = y;
      ll h = 0, inc = 0;
      while (1) {
         sp = y;
         inc = 0;
         for (auto i = mp.begin(); i != mp.end(); i++) {
            if (i->second == 0) {inc++; continue;}
            while (i->first <= sp && i->second > 0 && sp != 0 ) {
               sp = sp - i->first;
               i->second--;
            }
         }
         if (inc == mp.size()) {break;}
         h++;
      }
      cout << h << endl;
   }
   return 0;
}