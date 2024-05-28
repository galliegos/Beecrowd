#include <bits/stdc++.h>

using namespace std;
int main(){
	long long int resultado=1;
	long long int n;
	cin>>n;
	while(n>0){
		if(n%2!=0){
			resultado*=2;
		}
		n=ceil(n/2);
	}
	cout<<resultado<<endl;
    return 0;
}