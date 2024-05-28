#include <iostream>
#include <math.h>
using namespace std;
int main(){
	string mf;
	int M=0,F=0,cont=0;
	cin>>mf;
	
	for(auto a:mf){
		if(a=='M')
			M++;
		if(a=='F')
			F++;
	//cout<<M<<" "<<F<<endl;
		if(M==F)
			cont++;
			
	}
	
		
	long long int resp =1;
	
	//cout<<x;
	for(int i=0;i<cont-1;i++){
		
		resp=(2*resp)%1000000007;
	}
	cout<<resp<<endl;
}