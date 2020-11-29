#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,p=0,c=0,x,y; cin >> n;
		bool fault=true,possible=true,ok=false;
	   for(int i=1;i<=n;i++){
	      cin >> x >> y;
	      if(x<p || y<c || y-c>x-p) fault=false;
	      p=x; c=y;
	   }
	   if(fault) cout << "YES" << endl;
	   else cout << "NO" << endl;
	}
return 0;
}