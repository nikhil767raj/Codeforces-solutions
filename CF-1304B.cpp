#include <bits/stdc++.h>
using namespace std;

bool check_pal(string r){
    for(int i=0;i<r.length()/2;i++){
        if(r[i] == r[r.length()-(i+1)]) {}
        else return false;
    }
    return true;
}

int main() {
	// your code goes here
	int n,m; cin >> n >> m;
	string ar[n];
	string temp1="",temp2="";
	for(int i=0;i<n;i++) cin >> ar[i];
	
	for(int i=0;i<n-1;i++){
	    string str=ar[i];
	    reverse(ar[i].begin(),ar[i].end());
	    for(int j=i+1;j<n;j++){
	        if(ar[j] == ar[i] && ar[j] !="*"){
	            temp1=temp1+str;
	            temp2=ar[j]+temp2;
	            ar[i]="*"; ar[j]="*";
	            break;
	        }
	       // else continue;
	    }
	}
	bool ok=true;
	for(int i=0;i<n;i++){
	    if(ar[i] == "*") continue;
	    else{
	        if(check_pal(ar[i])) {
	            temp1=temp1+ar[i];
	            break;
	        }
	    }
	}
	string z=temp1+temp2;
	cout << z.length() << endl;
	cout << z << endl;
	return 0;
}
