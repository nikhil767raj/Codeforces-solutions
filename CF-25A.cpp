#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int ar[n];
	bool ok;
	int even=0,odd=0,o,e;
	for(int i=0;i<n;i++){
	   cin >> ar[i];
	   if(ar[i]%2 == 0) {
	      even++;
	      e=i+1;
	   }
	   else{
	      odd++;
	      o=i+1;
	   } 
	} 
	if(odd  == 1) cout << o << endl;
	else cout << e << endl;
}