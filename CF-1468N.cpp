#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int c1, c2, c3, a1, a2, a3, a4, a5;
        cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
        if (c1 >= a1) c1 = c1 - a1;
        else {cout << "NO" << endl; continue;}
        if (c2 >= a2) c2 = c2 - a2;
        else {cout << "NO" << endl; continue;}
        if (c3 >= a3) c3 = c3 - a3;
        else {cout << "NO" << endl; continue;}
        if (c1 >= a4) {c1 = c1 - a4;}
        else {
            a4 = a4 - c1;
            if (c3 >= a4) {c3 = c3 - a4;}
            else {cout << "NO" << endl; continue;}
        }
        if (c2 >= a5) {cout << "YES" << endl;}
        else {
            a5 = a5 - c2;
            if (c3 >= a5) {cout << "YES" << endl;}
            else cout << "NO" << endl;
        }
    }
    return 0;
}