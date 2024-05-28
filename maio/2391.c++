#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>


int main(){
	int n,soma,aux1;
	vector<int> v;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int aux;
		cin>>aux;
		v.push_back(aux);
	}
	soma=0;
	aux1=0;
	for(int i=1;i<n;i++){
		if(v[i]-v[i-1]!=v[aux1+1]-v[aux1]){
			soma++;
			aux1=i;
		}
	}
	soma++;
	cout<<soma<<endl;
	return 0;
	
	
}