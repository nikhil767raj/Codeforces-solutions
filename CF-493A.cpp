#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
    string home, away; cin >> home >> away;
    map<int, int>ma;
    map<int, int>mh;
    int t; cin >> t;
    while (t--) {
        int time; cin >> time;
        char x; cin >> x;
        int num; cin >> num;
        char z; cin >> z;
        if (x == 'a') {
            if (z == 'y') {
                if (ma[num] != -1) ma[num]++;
                else continue;
            }
            else {
                if (ma[num] != -1)
                {cout << away << " " << num << " " << time << endl; ma[num] = -1;}
                else continue;
                // print
            }
            if (ma[num] == 2) {
                ma[num] = -1;
                cout << away << " " << num << " " << time << endl;  continue;
            }
        }
        else {
            if (z == 'y') {
                if (mh[num] != -1) mh[num]++;
                else continue;
            }
            else {
                if (mh[num] != -1)
                {cout << home << " " << num << " " << time << endl; mh[num] = -1;}
                else continue;
            }
            if (mh[num] == 2) {
                mh[num] = -1;
                cout << home << " " << num << " " << time  << endl; continue;
            }
        }
    }
    return 0;
}