#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, red = 0, blue = 0; cin >> n;
      string r, b; cin >> r >> b;
      for (int i = 0; i < r.length(); i++) {
         if (r[i] > b[i]) red++;
         else if (r[i] < b[i]) blue++;
         else continue;
      }
      if (red > blue) cout << "RED" << endl;
      else if (red < blue) cout << "BLUE" << endl;
      else cout << "EQUAL" << endl;
   }
}