#include <bits/stdc++.h>

using namespace std;

#define ll long long
const long long MAX = 1010;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<char,int>> p;
	for(int i=0;i<k;i++){
		char aux;
		int a;
		cin>>aux>>a;
		p.push_back(make_pair(aux,a));
	}
	reverse(p.begin(),p.end());
	int conc=0,conl=0;
	int jogada=k;
	bool linhas[MAX];
	bool colunas[MAX];
	memset(linhas,false,MAX);
	memset(colunas,false,MAX);
	int resp[4];
	for(int i=0;i<4;i++)
		resp[i]=0;
	//cout<<resp[2]<<endl;
	for(auto[a,b]:p){
		if(a=='L'&&linhas[b]==false){
			if(m-conc>0){
				resp[(jogada-1)%4]+=m-conc;
				//cout<<(jogada-1)%4<<" "<<m-conc<<endl;
			}
			conl++;
			linhas[b]=true;
		}
		else if(a=='C'&&colunas[b]==false){
			if(n-conl>0){
				resp[(jogada-1)%4]+=n-conl;
				//cout<<(jogada-1)%4<<" "<<n-conl<<endl;
			}
			conc++;
			colunas[b]=true;
		}
		jogada--;
	}
	cout << 'R' << resp[0] << ' ';
    cout << 'H' << resp[1] << ' ';
    cout << 'C' << resp[2] << ' ';
    cout << 'P' << resp[3] << endl;
    return 0;
	
	
	
	
}