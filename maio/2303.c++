#include <iostream>
 
using namespace std;
const int MAX =1005;
int ma[MAX][MAX];
int main(){
	int l,c,n,m,i,j,g,h;
	cin>>l>>c>>n>>m;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			cin>>ma[i][j];
		}
	}
	int max=0;
	int aux;
	for(i=0;i<l;i+=n){
		for(j=0;j<c;j+=m){
			aux=0;
			for(g=i;g<(i+n);g++){
				for(h=j;h<(j+m);h++){
					aux+=ma[g][h];
				}
			}
			if(aux>max)
				max=aux;	
		}
	}
	cout<<max<<endl;
	return 0;
	
}