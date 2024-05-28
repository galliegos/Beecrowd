#include <bits/stdc++.h>
#define xmax 432
#define ymax 468
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x>xmax or x<0 or y>ymax or y<0){
		cout<<"fora"<<endl;
	}
	else
		cout<<"dentro"<<endl;
}