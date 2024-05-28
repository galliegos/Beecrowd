#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
struct dica {int x,y,d;};

int main(){
	int n,x,y,h,d;
	vector<dica> dicas;
	
	cin>>n>>h;
	for(int i=0;i<h;i++){
		dica aux;
		cin>>aux.x>>aux.y>>aux.d;
		dicas.push_back(aux);
	}
	int t_x,t_y,cont=0;
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			bool bol=true;
			for(int i=0;i<h;i++){
				if((abs(dicas[i].x-x)+abs(dicas[i].y-y))!=dicas[i].d)
					bol=false;
			}
			if(bol==true){
				t_x=x;
				t_y=y;
				cont++;
			}
		}
	}
	if(cont>1)
		cout<<"-1 -1"<<endl;
	else
		cout<<t_x<<" "<<t_y<<endl;
	
}