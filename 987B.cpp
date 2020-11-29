#include<bits/stdc++.h>
using namespace std;
#define ll   long long int

int main(){
	double x,y; cin >> x >> y;
x=y*log(x)-x*log(y);
	if(x>0) cout << ">" << endl;
	else if(x<0) cout << "<" << endl;
	else cout << "=" << endl;
}