#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
   ll q; cin >> q;
   ll d = q;
   bool ok = true;
   map < ll , ll > mp;
   if (q == 1) {
      cout << 1 << endl << 0 << endl;
      return 0;
   }
   while (q % 2 == 0) {
      mp[2]++;
      q = q / 2;
   }
   for (ll i = 3; i <= sqrt(q); i++) {
      while (q % i == 0) {
         mp[i]++;
         q = q / i;
      }
   }
   if (q > 2) mp[q]++;
   for (auto i : mp) {
      if (i.second == 1) continue;
      else {
         ok = false;
         break;
      }
   }
   if (mp.size() == 1) {
      for (auto i : mp) {
         if (i.second == 1) {
            cout << 1 << endl;
            cout << 0 << endl;
         }
         else {
            if (i.second == 2) {
               cout << 2 << endl;
            }
            else {
               cout << 1 << endl;
               cout << pow(i.first, 2) << endl;
            }
         }
      }
      return 0;
   }
   else {
      ll p = 0, x = 1;
      for (auto i : mp ) {
         if (p != 2) {
            x = x * (i.first);
            p++;
         }
         else break;
      }
      if (x != d) {
         cout << 1 << endl;
         cout << x << endl;
      }
      else {
         cout << "2" << endl;
      }
   }
   return 0;
}