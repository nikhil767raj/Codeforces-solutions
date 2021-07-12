#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int xa, xb, ya, yb, fa, fb; cin >> xa >> xb >> ya >> yb >> fa >> fb;
        if (fa == xa && xa == ya) {
            if (max(yb, xb) < fb || min(yb, xb) > fb)  cout << abs(yb - xb) << endl;
            else cout << abs(xa - ya) + abs(xb - yb) + 2 << endl;
        }
        else if (xb == yb && yb == fb) {
            if (max(xa, ya) < fa || min(xa, ya) > fa) cout << abs(ya - xa) << endl;
            else  cout << abs(xa - ya) + 2 << endl;
        }
        else {
            cout << abs(xa - ya) + abs(xb - yb) << endl;
        }
    }
}