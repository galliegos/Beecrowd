#include <iostream>
using namespace std;
int main(){
	long long int n,v,melhor=100000001,vencedor;
	cin>>n>>v;
	long long int soma=0;
	for(int j=0;j<n;j++){
		soma=0;
		for(int i=0;i<v;i++){
			int aux;
		
			cin>>aux;
			soma+=aux;
			//cout<<soma<<endl;
		
		}
		if(soma<melhor){
			melhor=soma;
			vencedor=j+1;
		}//cout<<vencedor<<endl;
	}
	cout<<vencedor<<endl;	
		
}