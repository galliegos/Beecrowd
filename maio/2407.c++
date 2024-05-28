#include <iostream>
using namespace std;
const int MAX=1001;
int d;
int c[MAX];
int l[MAX];
bool usado[1000001];
int main(){
	int n,x,i,j;
	
	bool magico=true;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>x;
			if(x<1 || x>1000000 || usado[x]){
				magico=false;
			}
			else{
				usado[x]=true;
				l[i]+=x;
				c[j]+=x;
				if(i==j)
					d+=x;
			}	
		}
	}
		for(i=0; magico && i<n;i++)
			magico &= (l[i]==d) && (c[i]==d);
		if(magico)
			cout<<d<<endl;
		else
			cout<<0<<endl;
		return 0;
	
}