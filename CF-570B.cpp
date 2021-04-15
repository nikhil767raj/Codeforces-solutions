#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    if (n == 1 && m == 1) {cout << 1 << endl; return 0;}
    int lt = m - 1;
    int rt = n - m;
    if (lt >= rt) {
        cout << m - 1 << endl;
    }
    else if (lt < rt) {
        cout << m + 1 << endl;
    }
}