#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n<<endl;

	int vet[7];
	for(int i=0;i<7;i++){
		vet[i]=0;
	}
	bool pode=true;
	while(n>0){
		pode=true;
		if(n-100>=0){
			n-=100;
			vet[0]++;
			pode=false;
		}
		else if(n-50>=0){
			n-=50;
			vet[1]++;
			pode=false;
		}
		else if(n-20>=0){
			n-=20;
			vet[2]++;
			pode=false;
		}
		else if(n-10>=0){
			n-=10;
			vet[3]++;
			pode=false;
		}
		else if(n-5>=0){
			n-=5;
			vet[4]++;
			pode=false;
		}
		else if(n-2>=0){
			n-=2;
			vet[5]++;
			pode=false;
		}
		else if(pode==true){
			n-=1;
			vet[6]++;
		}
		
	}
	for(int i=0;i<7;i++){
		if(i==0){
			cout<<vet[i]<<" nota(s) de R$ 100,00"<<endl;
		}
		if(i==1){
			cout<<vet[i]<<" nota(s) de R$ 50,00"<<endl;
		}
		if(i==2){
			cout<<vet[i]<<" nota(s) de R$ 20,00"<<endl;
		}
		if(i==3){
			cout<<vet[i]<<" nota(s) de R$ 10,00"<<endl;
		}
		if(i==4){
			cout<<vet[i]<<" nota(s) de R$ 5,00"<<endl;
		}
		if(i==5){
			cout<<vet[i]<<" nota(s) de R$ 2,00"<<endl;
		}
		if(i==6){
			cout<<vet[i]<<" nota(s) de R$ 1,00"<<endl;
		}
	}
}