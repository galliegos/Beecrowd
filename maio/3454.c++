#include <iostream>
using namespace std;
int main(){
	string c;
	cin>>c;
/*	if(c[0]=='O'){
		cout<<"?"<<endl;
		return 0;
	}*/
	int o=0;
	int x=0;
	for(int i=0;i<3;i++){
		if(c[i]=='O')
			o++;
		if(c[i]=='X')
			x++;
		}
	if(o>1 or x>2){
		cout<<"?"<<endl;
		return 0;
	}
		if (c[0]==c[1] or c[1]==c[2]){
			
			
				cout<<"Alice"<<endl;
				return 0;
			
		}
	
	
	cout<<"*"<<endl;
	return 0;
}