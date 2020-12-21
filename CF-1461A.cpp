#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;

  while (t--) {
    char c = 'b';
    bool ok = true;
    string temp = "";
    int n, k; cin >> n >> k;
    for (int i = 0; i < k; i++) {
      temp = temp + "a";
    }
    for (int i = 0; i < n - k; i++) {
      temp = temp + c;
      if (ok) {
        c++;
        ok = false;
      }
      else {
        c++;
        if (c == 'd') c = 'a';
      }
    }
    cout << temp << endl;
  }
}