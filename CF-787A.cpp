#include<bits/stdc++.h>
using namespace std;
int main() {
   int a, b, c, d; cin >> a >> b >> c >> d;
   int z = (a + d) - (b + c);
   for (int i = 1; i < 10000; i++) {
      for (int j = 1; j < 1000; j++) {
         if (z == (a * i - c * j)) {
            cout << b - a + i*a << endl;
            return 0;
         }
      }
   }
   cout << "-1" << endl;
}