#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, x, xx; cin >> n >> k;
        if (n == k) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) cout << "1" << " ";
            cout << endl;
        }
        else if (n < k) {
            cout << "NO" << endl;
        }
        else {
            if (n % 2 == 0) {
                if (k > n / 2) {
                    x = k - 1;
                    xx = n - x;
                    if (xx % 2 == 0) cout << "NO" << endl;
                    else {
                        cout << "YES" << endl;
                        for (int i = 1; i <= k - 1; i++) cout << "1" << " ";
                        cout << xx << endl;
                    }

                }
                else if (k == n / 2) {
                    cout << "YES" << endl;
                    for (int i = 1; i <= k; i++) cout << "2" << " ";
                    cout << endl;
                }
                else if (k < n / 2) {
                    cout << "YES" << endl;
                    for (int i = 1; i <= k - 1; i++) cout << "2" << " ";
                    int z = 2 * (k - 1);
                    int zz = n - z;
                    cout << zz << endl;
                }
            }
            else {
                if (k % 2 == 0) {cout << "NO" << endl;}
                else {
                    x = k - 1;
                    xx = n - x;
                    if (xx % 2 == 0) cout << "NO" << endl;
                    else {
                        cout << "YES" << endl;
                        for (int i = 1; i <= k - 1; i++) cout << "1" << " ";
                        cout << xx << endl;
                    }
                }
            }
        }
    }
}