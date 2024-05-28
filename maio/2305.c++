#include<iostream>
using namespace std;
#include<vector>
#include<queue>
vector<vector<int>> adj (50000);
int graus[50000];
vector<int>topsort(50000,0);
bool topologicalsort(vector<int> &resp , int N){
	priority_queue<int,vector<int>,greater<int>> S;
	for(int i=0;i<N;i++){
		if(graus[i]==0){
			S.push(i);
		}
	}
	int t=0;
	while(!S.empty()){
		int c=S.top();
		S.pop();
		topsort[c]=t;
		resp[t++]=c;
		for(int aux:adj[c]){
			graus[aux]--;
			if(graus[aux]==0)
				S.push(aux);
		}
	}
	return t==N;
}
int main(){
	int a,b,n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		graus[i]=0;
//	cout<<m;
	for(int j=0;j<m;j++){
		//cout<<"aaaa";
		cin>>a>>b;
		
		adj[a].push_back(b);
		//adj[b].push_back(a);
		graus[b]++;
	}
	vector<int> resposta(50000,-1);
/*	for(int i=0;i<100;i++)
		cout<<resposta[i]<<endl;*/
	bool r= topologicalsort(resposta,n);
	if(r==false){
		cout<<"*"<<endl;
		return 0;
	}
	else
		for(int i=0;i<n;i++){
			cout<<resposta[i]<<endl;
		}
	//cout<<endl;
	return 0;
	
	
}