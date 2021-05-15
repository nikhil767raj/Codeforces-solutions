#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; cin >> n;
   vector < string > v;
   map < string , int > mp;
   for (int i = 0; i < n; i++) {
      string s; cin >> s;
      mp[s]++;
      if (mp[s] == 1) {
         cout << "OK" << endl;
         // mp[s]++;
      }
      else {
         cout << s << mp[s] - 1 << endl;
         // mp[s]++;
      }
   }
   return 0;
}