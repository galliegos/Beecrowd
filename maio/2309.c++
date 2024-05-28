#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int valores[14];
void vetor_truco(){
	valores [4] = 1;
  valores [5] = 2;
  valores [6] = 3;
  valores [7] = 4;
  valores [12] = 5;
  valores [11] = 6;
  valores [13] = 7;
  valores [1] = 8;
  valores [2] = 9;
  valores [3] = 10;
}


int main(){
	int n,a=0,b=0,A=0,B=0;
	cin>>n;
	vetor_truco();
	for(int i = 0;i<n;i++){
		a=0;
		b=0;
		int v[3];
		int v1[3];
		for(int i=0;i<3;i++){
			v[i]=v1[i]=0;
		}
		for(int j=0;j<3;j++){
			cin>>v[j];
		}
		for(int j=0;j<3;j++){
			cin>>v1[j];
		}
		for(int j=0;j<3;j++){
		
			if(valores[v[j]]>=valores[v1[j]])
				a++;
			else
				b++;
				
			
			
			
			
			
			
			/*if(v[j]<4&&v1[j]>=4)
				a++;
			else if(v1[j]<4&&v[j]>=4)
				b++;
			else if(v[j]>=v1[j] and ((v[i]>=4 and v1[j]>=4) or (v[j]<4 and v1[j]<4)))
				a++;
			else if(v1[j]>v[j]and ((v[i]>=4 and v1[j]>=4) or (v[j]<4 and v1[j]<4)))
				b++;*/
				
		}
		//cout<<endl<<a<<" "<<b<<endl;;
		
		
		if(a>b)
			A++;
		if(a<b)
			B++;
		
	}
	cout<<A<<" "<<B<<endl;
	
}