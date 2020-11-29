#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int x0,x1,x2,y0,y1,y2; cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;
		int p=min(x2,y1);
		x2=x2-p;
		y1=y1-p;
		sum=sum+p*2;
		int q=min(y2,x0)
		y2=y2-q;
		x0=x0-q;
		int r=min(x2,y2);
		x2=x2-r;
		y2=y2-r;
		int s=min(y2,x1);
		sum=sum-s;
		cout << sum << endl;
	}
}