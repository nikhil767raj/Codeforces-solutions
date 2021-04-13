#include<bits/stdc++.h>
using namespace std;
int main() {
   string s; cin >> s;
   char c;
   int j, k = 0;
   int p = s[s.length() - 1] - '0';
   for (int i = 0; i < s.length(); i++) {
      int z = s[i] - '0';
      if (z % 2 == 0) {
         if (z < p) {
            char x = s[i];
            s[i] = s[s.length() - 1];
            s[s.length() - 1] = x;
            cout << s << endl;
            return 0;
         }
         else {
            j = i;
            c = s[j];
         }
      }
      else k++;
   }
   if (k == s.length()) {
      cout << "-1" << endl;
      return 0;
   }
   s[j] = s[s.length() - 1];
   s[s.length() - 1] = c;
   cout << s << endl;

   return 0;
}