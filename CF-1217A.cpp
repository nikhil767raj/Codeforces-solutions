#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
  int t; cin >> t;
  while (t--) {
    ll st, it, exp; cin >> st >> it >> exp;
    if (exp == 0) {
      if (st > it) cout << 1 << endl;
      else cout << 0 << endl;
      continue;
    }
    if (st == it) {
      cout << (exp + 1) / 2 << endl;
      continue;
    }
    if (st > it) {
      if (exp < (st - it)) cout << exp + 1 << endl;
      else if (exp == (st - it)) cout << exp << endl;
      else cout << (st - it) + (exp - (st - it) + 1) / 2 << endl;
      continue;
    }
    if (st < it) {
      if (exp <= (it - st)) cout << 0 << endl;
      else cout << ((exp - (it - st) + 1) / 2) << endl;
    }
  }

}