#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, sum = 0, summ = 0; cin >> n >> k;
    int z = n * n - (n - k);
    int zz = z;
    int x = n - k + 1;
    int xx = x;
    int j = 1, p = 1;
    for (int i = 0; i < n; i++) {
        summ = summ + zz;
        zz = zz - xx;
    }
    cout << summ << endl;
    for (int i = 0; i < n; i++) {
        sum = sum + z;
        p = 1;
        for (int i = 1; i <= k; i++) {
            if (i == k) cout << z << " ";
            else {cout << j << " "; j++;}
        }
        for (int i = k + 1; i <= n; i++) {
            cout << z + p << " ";
            p++;
        }
        cout << endl;
        z = z - x;
    }
}