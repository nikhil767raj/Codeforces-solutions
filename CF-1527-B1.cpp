#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
   int t; cin >> t;
   while (t--) {
      int n, zer = 0, one = 0; cin >> n;
      string s; cin >> s;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '0') zer++;
         else one++;
      }
      if (zer == 1 || zer % 2 == 0) cout << "BOB" << endl;
      else {
         cout << "ALICE" << endl;
      }

   }
   return 0;
}