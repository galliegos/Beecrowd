#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int num;
	int zeros=0;
	scanf("%d",&num);
	while(num>0){
		num=ceil(num/5);
		zeros+=num;
	}
	printf("%d\n",zeros);
}