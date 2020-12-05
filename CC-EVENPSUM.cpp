#include <bits/stdc++.h>
using namespace std;
#define ll     long long 

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	   ll a,b; cin >> a >> b;
	   ll mn=min(a,b);
	   ll mx=max(a,b);
	   if(a%2 != 0 && b%2 != 0) cout << (mx/2+1)*(mn/2+1)+(mx/2)*(mn/2) << endl;
	   else if(a%2 == 0 && b%2 == 0) cout << 2*(mx/2)*(mn/2) << endl;
	   else{
	      if(mn%2 == 0){
	         cout << (mx/2+1)*(mn/2)+(mn/2)*(mx/2) << endl;
	      }
	      else{
	         cout << (mx/2)*(mn/2+1)+(mx/2)*(mn/2) << endl;
	      }
	   }
	    
	}
	return 0;
}
