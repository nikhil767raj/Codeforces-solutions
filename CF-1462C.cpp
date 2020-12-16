#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    string temp = "";
    int n, j = 0, rev = 0, z, k = 9; cin >> n;
    if (n > 45) {
      cout << "-1" << endl;
      continue;
    }
    else if (n >= 1 && n <= 9) {cout << n << endl; continue;}
    else {
      while (n > 0) {
        z = n;
        n = n - k;
        if (n < 0) {
          char d = (char)z + '0';
          temp = d + temp;
          break;
        }
        char c = (char)k + '0';
        temp = c + temp;
        k--;
      }
      cout << temp << endl;
    }
  }
}