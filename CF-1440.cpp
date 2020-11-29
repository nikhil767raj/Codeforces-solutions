#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t; cin >> t;
	while(t--){
		int n,c0,c1,h,sum=0; cin >> n >> c0 >> c1 >> h;
		string s; cin >> s;
		int k=s.length();
		int one=0,zero=0;
		for(int i=0;i<s.length();i++){
			if(s[i] == '1') one++;
			else zero++;
		}
		if(h>=c0 && h>=c1){
			cout << c0*zero +c1*one << endl;
		}
		else if(h<=c0 && h>=c1){
		   sum=h*zero;
		   cout << min(sum+c1*k,c1*one+c0*zero) << endl;
			// cout << min(c0*zero +c1*one, h*c0+(one+zero)*c1)<< endl;

		}
		else if(h>=c0 && h<=c1){
		   sum=h*one;
		      cout  << min(sum+c0*k,c0*zero+c1*one)   << endl;
		      
			// cout << min(c1*zero+c1*one,h*c1+(one+zero)*c0) << endl;
		}
		else if(h<=c0 && h<=c1){
		   if(c0<c1){
		   sum=h*one;
		   cout << min(sum+c0*k,c0*zero+c1*one) << endl;}
		   else{
		      sum=h*zero;
		      cout << min(sum+c1*k,c0*zero+c1*one)<< endl;
		   }
		}
	}

}