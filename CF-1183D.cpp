#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, sum = 0, x = INT_MAX; cin >> n;
      vector < ll > v, vt;
      map < ll , ll > mp;
      for (int i = 0; i < n; i++) {
         ll elem; cin >> elem;
         v.push_back(elem);
         mp[elem]++;
      }
      for (auto i : mp) vt.push_back(i.second);

      sort(vt.begin(), vt.end(), greater<int>());
      x = vt[0];
      // for(auto i:vt) cout << i << " "; cout << endl;
      for (int i = 0; i < vt.size(); i++) {
         if (x == 0) {break;}
         if (vt[i] == x) {sum += vt[i]; x = vt[i] - 1;}
         else if (vt[i] > x) {
            sum += x;
            x--;
         }
         else {
            sum += vt[i];
            x = vt[i] - 1;
         }
      }
      cout << sum << endl;
   }
}