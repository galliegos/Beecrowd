#include <stdio.h>

int main(){
	long long int n,p;
	scanf("%lld %lld",&n,&p);
	long long int totalplacas=n*p;
	long long int v[10];
	
	for(int i=1;i<=10;i++){
		
		if(((totalplacas*i)%10)==0){
			
			v[i]=(totalplacas*i)/10;
		}
		
		else
			v[i]=((totalplacas*i)/10)+1;
		
	}
	for(int i=1;i<10;i++){
		if(i==9){
			printf("%lld",v[i]);}
			else
			
		printf("%lld ",v[i]);
	}
	printf("\n");
	return 0;
}