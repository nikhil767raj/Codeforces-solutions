#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector < int > v;
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
      }
      int up = 0, dp = 0;
      for (int i = 0 ; i < n; i++) {
         if (v[i] == 1) up++;
         else if (v[i] == 2) dp++;
         else {
            up++;
         }
      }
      cout << up << endl;

   }
}