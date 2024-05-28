#include <stdio.h>
#define max 100000
int main(){
	int n;
	scanf("%d",&n);
	int v[max];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	int maior=0;
	int posmaior=0;
	for(int i=0;i<n;i++){
		if(v[i]>maior){
			maior=v[i];
			posmaior=i;
			
		}
	}
	if(posmaior==0){
		printf("S\n");
	}
	else
		printf("N\n");
	return 0;
}