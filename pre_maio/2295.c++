#include <stdio.h>
int main(){
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(c/a>d/b){
		printf("A\n");
	}else
		printf("G\n");
	return 0;
}