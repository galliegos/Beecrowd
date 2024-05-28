#include <iostream>
#include<math.h>
using namespace std;
int main(){
	long long int x;
	cin>>x;
	cout<<x<<endl;
	while(x>9){
		int unid=x%10;
		//cout<<x/10<<endl;
		x=((x/10)*3)+unid;
		cout<<x<<endl;
	}
	return 0;
	
}