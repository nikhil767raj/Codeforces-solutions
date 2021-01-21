#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
  int t; cin >> t;
  while (t--) {
    bool ok = true, check = false;
    int ar[10];
    int j = 0;
    for (int i = 0; i < 10; i++) ar[i] = i;
    int n; cin >> n;
    if (n == 1) {
      cout << 9 << endl;
      continue;
    }
    else {
      while (n--)
        if (ok) {cout << 9; ok = false;}
      if (ok == false check == false) {cout << 8; check = true;}
      if (check) {
        cout << ar[j];
        j = (j) % 10;
      }
    }
    cout << endl;
  }
}