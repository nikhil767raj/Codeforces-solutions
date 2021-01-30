#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, ev = 0, od = 0; cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if (ar[i] % 2 == 0) ev++;
            else od++;
        }
        if (ev == od) cout << ev << endl;
        else if (ev < od) cout << ev << endl;
        else cout << od << endl;


    }
}