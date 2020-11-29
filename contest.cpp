#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k,sum=0; cin >> n >> k;
		int z=n*k;
		int ar[n];
		for(int i=0;i<z;i++) cin >> ar[i];
		int cl=ceil(n/2);
	    int diff=n-ceil(n/2);
	    for(int i=n-1;i>=0;i=i-diff){

            if(k!=0){
            	sum=sum+ar[i];
            	k++;
            }
	    	
	    }
	    cout << sum << endl;

	}
}