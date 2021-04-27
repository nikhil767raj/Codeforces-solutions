#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
    ll n, z = 0; cin >> n;
    ll ar[100001] = {0};
    for (int i = 2; i <= n; i++) {
        if (ar[i] == 0) {
            z++;
            for (int j = i; j <= n; j = j + i) {
                ar[j] = z;
            }
        }
    }
    for (int i = 2; i <= n; i++) cout << ar[i] << " "; cout << endl;
}