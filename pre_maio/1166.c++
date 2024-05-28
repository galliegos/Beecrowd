#include <stdio.h>
#include <math.h>
int main(){
	int x,y=1,teste;
	int valor=0;
	scanf("%d",&teste);
	for(int t=0;t<teste;t++){
	//valor=0;
	scanf("%d",&x);
	valor=0;
	y=1;
	int h=0;
	int vet[x];
	for(int i=0;i<x;i++){
		vet[i]=0;
	}
	while(h<x){
		float resp=sqrt(y+vet[h]);
		//printf(" %d %f %d %d a",(int)resp,resp,y,vet[h]);
		if(((int)resp!=resp) && (vet[h]!=0)){
			h++;
	}
	
	else{
		vet[h]=y;
		valor++;
		h=0;
		y++;
	}
	
	
}
printf("%d\n",valor);
}
	
	
}