#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, x, z; cin >> a >> b >> x;
    string temp = "";
    if (x % 2 == 0) z = x / 2;
    else z = x / 2 + 1;
    for (int i = 0; i < z; i++) {
        temp = temp + "01";
        a--;
        b--;
    }
    if (a > 0) for (int i = 0; i < a; i++) {
            temp = "0" + temp;
        }
    if (b > 0) for (int i = 0; i < b; i++) {
            temp = temp + "1";
        }
    if (x % 2 == 0) {
        if (a > 0 && b > 0) {
            temp.erase(0, 1);
            temp = temp + "0";
        }
        else if (a > 0 && b == 0) {
            temp.erase(0, 1);
            temp = temp + "0";
        }
        else if (a == 0 && b > 0) {
            temp = "1" + temp;
            temp.erase(temp.length() - 1, 1);
        }
    }
    cout << temp << endl;
}