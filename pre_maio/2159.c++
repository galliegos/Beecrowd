#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
	double num;
	double valormax=0;
	double valormin=0;
	cin>>num;
	
	valormin = num/log(num);
	valormax= 1.25506*valormin;
	cout << fixed << setprecision(1);
	
	cout<<valormin<<" "<<valormax<<endl;
}