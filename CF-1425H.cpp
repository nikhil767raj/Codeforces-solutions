#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    string ar[4];
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (c == 0 && b == 0 || a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0) ar[2] = "Tidak";
    else if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0) ar[2] = "Ya";

    if (b == 0) {
      if (c == 0) ar[1] = "Tidak";
      else if (c != 0 && a % 2 == 0) ar[1] = "Tidak";
      else  if (c != 0 && a % 2 != 0) ar[1] = "Ya";
    }
    else {
      if (b % 2 == 0 && a % 2 == 0 || b % 2 != 0 && a % 2 != 0) ar[1] = "Tidak";
      else if (a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0) ar[1] = "Ya";
    }

    if (d == 0 && a == 0) ar[3] = "Tidak";
    else if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0) ar[3] = "Ya";
    else if (a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0) ar[3] = "Tidak";

    if (a == 0) {
      if (d == 0) ar[0] = "Tidak";
      else {
        if (b % 2 != 0) ar[0] = "Ya";
        else ar[0] = "Tidak";
      }
    }
    else {
      if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0) ar[0] = "Tidak";
      else if (a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0) ar[0] = "Ya";
    }
    cout << ar[0] << " " << ar[1] << " " << ar[2] << " " << ar[3] << endl;
  }

}