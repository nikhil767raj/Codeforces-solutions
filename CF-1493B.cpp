#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
bool check(int x, int y, int h , int m) {
  vector < int > v{0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
  if (v[x % 10] == -1 || v[x / 10] == -1 || v[y % 10] == -1 || v[y / 10] == -1) return false;

  int p = v[x % 10] * 10 + v[x / 10];
  int q = v[y % 10] * 10 + v[y / 10];
  if (p < m && q < h) return 1;
  return 0;
}
int main() {
  int t; cin >> t;
  while (t--) {
    ll h, m; cin >> h >> m;
    string s; cin >> s;
    bool ok = true;

    int a = (s[0] - '0') * 10 + (s[1] - '0');
    int b = (s[3] - '0') * 10 + (s[4] - '0');
    while (!(check(a, b, h, m))) {
      b++;
      if (b == m) a++;
      b = b % m;
      a = a % h;
    }
    printf("%02d:", a);
    printf("%02d\n", b);
  }
}