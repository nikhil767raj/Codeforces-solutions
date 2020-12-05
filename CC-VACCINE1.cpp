#include <bits/stdc++.h>
using namespace std;
#define ll     long long 

int main() {
	// your code goes here
	ll d1,v1,d2,v2,p,day=0,vac=0; cin >> d1 >> v1 >> d2 >> v2 >> p;
	if(d1>d2){
	  while(d1!=d2){
	     if(v2>=p){cout << d2 << endl; return 0;}
	     if(vac>=p){
	        cout << d2 << endl;
	        return 0;
	     }
	     else{
	        vac=vac+v2;
	        d2++;
	     }
	  }
	  while(1){
	     day++;
	     vac=vac+(v1+v2);
	     if(vac>=p){
	        cout << d2+day-1 << endl;
	        return 0;
	     }
	  }
	}
	else{
	   while(d1!=d2){
	      if(v1>=p) {cout << d1 << endl; return 0;}
	     if(vac>=p){
	        cout << d1 << endl;
	        return 0;
	     }
	     else{
	            vac=vac+v1;
               d1++;
	     }
	  }
	  while(1){
	     day++;
	     vac=vac+(v1+v2);
	     if(vac>=p){
	        cout << d2+day-1 << endl;
	        return 0;
	     }
	  }
	   
	}
	return 0;
}
