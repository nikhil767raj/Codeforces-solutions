#include <bits/stdc++.h>
using namespace std;
#define ll     long long 

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	   int risk=0,norm=0;
	   int n,d; cin >> n >> d;
	   int ar[n];
	   for(int i=0;i<n;i++) {
	      cin >> ar[i];
	      if(ar[i] >=80 || ar[i]<=9) risk++;
	      else norm++;
	   }
	   int dayr=risk/d;
	   int dayn=norm/d;
	   if(risk%d == 0 && norm%d == 0) cout << dayr+dayn << endl;
	   else if(risk%d != 0 && norm%d !=0) cout << dayr+dayn+2 << endl;
	   else cout << dayr+dayn+1 << endl;
	}
	return 0;
}
