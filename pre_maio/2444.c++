#include <bits/stdc++.h>
#define volmax 100
using namespace std;
int main(){
	int vol,trocas;
	cin>>vol>>trocas;
	int valor=0;
	for(int i=0;i<trocas;i++){
		cin>>valor;
		
			if(valor>0){
				vol+=valor;
				valor=0;
			}
			if(valor<0){
				vol+=valor;
				valor=0;
			}
			if(vol>100)
				vol=100;
			if(vol<0)
				vol=0;
			
		
		valor=0;
	}
	cout<<vol<<endl;
	
}