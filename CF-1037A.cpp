#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    ll n, i; cin >> n;
    ll ar[31] = {0};
    for (int i = 0; i < 31; i++) ar[i] = pow(2, i);
    // for(int i=0;i<31;i++) cout << ar[i] << " ";
    for (int i = 0; i < 31; i++) {
        if (n >= ar[i]) continue;
        else {
            cout << i << endl;
            break;
        }
    }
}