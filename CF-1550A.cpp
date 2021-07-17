#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int s, j = 1, sum = 0; cin >> s;
        int ar[500];
        for (int i = 0; i < 500; i++) {ar[i] = j; j += 2;}
        for (int i = 0; i < 500; i++) {
            sum += ar[i];
            if (sum >= s) {cout << i + 1 << endl; break;}
        }
    }
}