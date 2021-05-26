#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, mx = -1; cin >> n;
   vector < int > v;
   bool ok = false, ck = false;
   map < int , int > mp;
   for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      if (elem == 1) {
         mp[1] = 1;
         continue;
      }
      v.push_back(elem);
      ok = false;
      while (elem % 2 == 0) {
         ok = true;
         elem = elem / 2;
      }
      if (ok) mp[2]++;
      for (int i = 3; i <= sqrt(elem); i = i + 2) {
         ck = false;
         while (elem % i == 0) {
            ck = true;
            elem = elem / i;
         }

         if (ck) mp[i]++;
      }
      if (elem > 2) mp[elem]++;
   }
   for (auto i : mp) {
      mx = max(mx, i.second);
   }
   cout << mx << endl;

}