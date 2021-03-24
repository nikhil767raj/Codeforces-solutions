#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, res = 0, zer = 0, on = 0, tw = 0; cin >> n;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
            if (elem % 3 == 0) zer++;
            if (elem % 3 == 1) on++;
            if (elem % 3 == 2) tw++;
        }
        int inc = (zer + on + tw) / 3;
        int tar = n / 3;
        while (1) {
            if (zer == on && on == tw) break;
            int mx = max({zer, on, tw});
            if (mx == zer) {
                res++;
                zer--;
                if (on < tar) on++;
                else {
                    res++;
                    tw++;
                }
            }
            else if (mx == on) {
                res++;
                on--;
                if (tw < tar) tw++;
                else {
                    res++;
                    zer++;
                }
            }
            else {
                res++;
                tw--;
                if (zer < tar) zer++;
                else {
                    res++;
                    on++;
                }

            }
        }
        cout << res << endl;
    }
}