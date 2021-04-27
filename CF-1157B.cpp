#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
  int n; cin >> n;
  string s; cin >> s;
  char ar[10];
  for (int i = 1; i <= 9; i++) cin >> ar[i];
  bool ok = false;
  for (int i = 0; i < s.length(); i++) {
    if (ok) {
      if (s[i] <= ar[s[i] - '0']) {
        s[i] = ar[s[i] - '0'];
        continue;
      }
      else break;
    }
    if (s[i] < ar[s[i] - '0']) {
      s[i] = ar[s[i] - '0'];
      ok = true;
    }
    else continue;
  }
  cout << s << endl;
}