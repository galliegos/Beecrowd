#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,x,y,z;
	while(scanf("%d",&x)!=EOF){
		
		cin>>y>>z;
		
		
		
		
			
		
		//cout<<x<<endl;
		
		int auxx=x;
		int auxy=y;
		while(auxy != 0){//calcula mdc
        int r = auxx % auxy;
        auxx = auxy;
        auxy = r;
    }
    if(auxx==1){
    	n=1;
	}
	else
		n=2;
	
    if((x*x == y*y + z*z) or (y*y == x*x + z*z) or (z*z == y*y + x*x)  ){
    	if(n==1)
    		cout<<"tripla pitagorica primitiva"<<endl;
    	if(n==2)
    		cout<<"tripla pitagorica"<<endl;
	}
	else
		cout<<"tripla"<<endl;
	n=0;
    	
	}
	
}