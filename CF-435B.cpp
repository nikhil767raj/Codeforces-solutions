#include<bits/stdc++.h>
using namespace std;
int main() {
   string s; cin >> s;
   int k; cin >> k;
   for (int i = 0; i < s.length(); i++) {
      int p = i;
      if (k <= 0) break;
      for (int j = p + 1; j < s.length() && j - i <= k ; j++) {
         if (s[j] > s[p]) p = j;
      }
      k = k - (p - i);
      while (p != i) {
         swap(s[p], s[p - 1]);
         p--;
      }
   }
   cout << s << endl;
}