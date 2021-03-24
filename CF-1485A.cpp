#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b, count = 0; cin >> a >> b;
        ll temp = a;
        ll mn = 40;
        for (ll i = 0; i < 32; i++) {
            count = 0;
            if (b + i == 1) continue;
            else {
                temp = a;
                while (temp != 0) {
                    count++;
                    temp = temp / (b + i);
                }
            }
            mn = min(mn, count + i);
        }
        cout << mn << endl;
    }

}