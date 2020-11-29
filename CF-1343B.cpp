#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		int k=2,l=1;
		int even=0,odd=0;
		bool ok=true;
		vector<int> vt;
		for(int i=0;i<n;i++){
		   if(i<n/2)
			{vt.push_back(k);  even=even+k;k=k+2;}
			else{
   			if(i != n-1)
   			{vt.push_back(l);odd=odd+l;l=l+2;}
   			else{
   			   if((even-odd)%2 == 0) {cout << "NO" << endl; ok=false; break;}
   			    else vt.push_back(even-odd);
   			}
		   }
		}
		if(ok == false) continue;
		cout << "YES" << endl;
		for(int i=0;i<n;i++){
		   cout << vt[i] << " ";
		}
		cout << endl;
// 		cout << even << " " << odd << "m" << endl;
	}
}