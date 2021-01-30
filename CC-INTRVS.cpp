#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, z, inc = 0; cin >> n >> k;
        int ar[n];
        bool ok = false, check = true, fault = true, possible = false;
        if (n % 2 == 0) z = n / 2;
        else z = (n / 2) + 1;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if (ar[i] == -1) {check = false; fault = false;}
            else inc++;
            if (ar[i] > k) ok = true;
            if (ar[i] > 1) possible = true;
        }
        if (inc < z) {cout << "Rejected" << endl;}
        else if (ok) {cout << "Too Slow" << endl;}
        else if (check && inc == n && possible == false) {cout << "Bot" << endl;}
        else cout << "Accepted" << endl;
    }
}