#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int MAX = 105;
int v[MAX];
int main(){
	int n,m,aux=0;	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		v[i]=0;
	}
	for(int i=0;i<m;i++){
		int auxiliar=0;
		cin>>auxiliar>>aux;
		auxiliar--;
		v[auxiliar]=1;
		for(int j=auxiliar;j<n;j+=aux){
			v[j]=1;
		}
		for(int j=auxiliar;j>=0;j-=aux){
			v[j]=1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
	
}