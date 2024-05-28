#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
int main(){
	int x,y,z;
	int cx,cy,cz;
	cin>>x>>y>>z>>cx>>cy>>cz;
	int resp=(cx/x)*(cy/y)*(cz/z);
	cout<<resp<<endl;
	return 0;
}