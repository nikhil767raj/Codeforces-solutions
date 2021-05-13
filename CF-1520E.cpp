#include<bits/stdc++.h>
using namespace std;
#define ll      long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, count = 0, sp = 0, total = 0, idx = 0, abs = 0, inc = 0; cin >> n;
      string s; cin >> s;
      bool ok = false;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '*') count++;
         else  abs++;
      }
      if (abs == 0 || count == 1 || abs  == s.length()) {
         cout << 0 << endl;
         continue;
      }
      count = (count + 1) / 2;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '*') {
            inc++;
            if (inc == count) {
               idx = i;
               break;
            }
         }
      }
      for (int i = idx - 1; i >= 0; i--) {
         if (s[i] == '*') total = total + sp;
         else  sp++;
      }
      sp = 0;
      for (int i = idx + 1; i < s.length(); i++) {
         if (s[i] == '*') total = total + sp;
         else sp++;
      }
      cout << total << endl;
   }
   return 0;
}