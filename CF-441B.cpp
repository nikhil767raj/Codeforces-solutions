#include<bits/stdc++.h>
using namespace std;
bool cmp(pair < int , int > &a , pair < int , int > &b) {
   return (b.second > a.second);
}
int main() {
   int n, x; cin >> n >> x;
   vector < pair < int , int > > v;
   int ar[3002] = {0};
   for (int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      ar[x] = ar[x] + y;
   }
   int left = 0, sum = 0;
   for (int i = 1; i < 3002; i++) {
      sum += min(ar[i], x);
      ar[i] = ar[i] - min(ar[i], x);
      ar[i + 1] = ar[i + 1] + min(ar[i], x);
   }
   cout << sum << endl;
   return 0;
}