#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	string exp;
	int tam=0;
	int cont=0;
	int i;
	while(cin>>exp){
		cont=0;
		tam=exp.length();
		for(i=0;i<exp.length();i++){
			if(exp[i]=='('){
				cont++;
			}
			else if(exp[i]==')'){
				if(cont>0){
				cont--;
			}
			else
				break;
			}
		}
		if(i==tam && cont==0)  //se fechou tudo e se tamanho é i, ou seja, nao houve break
			cout<<"correct"<<endl;
		else
			cout<<"incorrect"<<endl;
		
	}
	return 0;
}