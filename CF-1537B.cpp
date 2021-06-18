#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main() {
   int t; cin >> t;
   while (t--) {
      // n is y cord m is x cord
      int n, m, x, in, im; cin >> n >> m >> in >> im;
      int x1 = 1;
      int y1 = 1;
      int x2 = 1;
      int y2 = m;
      int x3 = n;
      int y3 = 1;
      int x4 = n;
      int y4 = m;
      int mx = max({abs(in - 1) + abs(im - 1), abs(in - 1) + abs(im - m), abs(in - n) + abs(im - 1) , abs(in - n) + abs(im - m)});
      if (mx == abs(in - 1) + abs(im - 1)) {
         cout << 1 << " " << 1 << " " << n << " " << m << endl;
      }
      else if (mx == abs(in - 1) + abs(im - m)) {
         cout << 1 << " " << m << " " << n << " " << 1 << endl;
      }
      else if (mx == abs(in - n) + abs(im - 1) ) {
         cout << n << " " << 1 << " " << 1 << " " << m << endl;
      }
      else {
         cout << n << " " << m << " " << 1 << " " << 1 << endl;
      }

   }
}