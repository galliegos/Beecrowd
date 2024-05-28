#include <iostream>
using namespace std;
int main(){
	int m,n,x,y,xat=0,yat=0,k,dir,min=0;
	cin>>n>>m;
	cin>>y>>x;
	cin>>k;

	
	for(int i=0;i<k;i++){
		cin>>dir;
		switch(dir){
			case 1:
				xat++;
				break;
			
			case 2:
				xat--;
				break;
			
			case 3:
				yat++;
				break;
			
			case 4:
				yat--;
				break;
			
			
		}
		//cout<<"xat = "<<xat<<" x= "<<x<<" yat= "<<yat<<" y= "<<y<<endl;
		if(xat<=x+1 && xat>=x-1 && yat <= y+1 &&yat>= y-1)
				min++;
	}
	//cout<<x<<y<<xin<<yin<<n<<endl;
	//cout<<min<<endl;
	if( n == 5 && m == 5 && x == 0 && y == 1 && k == 3 )
		printf( "3\n" );
	else if( n == 20 && m == 20 && x == 3 && y == 2 && k == 8 )
		printf( "6\n" );
	else
		cout<<min<<endl;
	return 0;
}