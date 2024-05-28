#include <iostream>
#include<math.h>
using namespace std;
int main(){
	long long int x,y,z;
	cin>>x>>y>>z;
	char c;
	cin>>c;
	long long int resp=0;
	if(c=='A'){
		resp=x+ (1.5*y)+(2.5*z);
		//cout<<(long long int)2.5*z<<endl;
	
	}
	if(c=='B'){
		resp= y+ (x/1.5)+ ((2.5*z)/1.5);
		
	}
	if(c=='C'){
		resp=z+(x/2.5)+((1.5*y)/2.5);
		
		
	}
	cout<<resp<<endl;
}