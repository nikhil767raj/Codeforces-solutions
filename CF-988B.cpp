#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
  return a.size() < b.size();
}

int main() {
  int n, k = 0; cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n, cmp);
  for (int i = 1; i < n; i++) {
    if (s[i].find(s[i - 1]) != string::npos) continue;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  for (int i = 0; i < n; i++) cout << s[i] << endl;
}