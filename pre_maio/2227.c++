#include <stdio.h>
int main() {
 
    int A,V,n=0,X,Y,maior,aeros[101];
    scanf("%d %d",&A,&V);

   
    while(A!=0&&V!=0){
    	for(int i=1;i<=A;i++){
        aeros[i]=0;
    }
    	for(int i=0;i<V;i++){
        	scanf("%d %d",&X,&Y);
        	aeros[X]+=1;
        	aeros[Y]+=1;
    	}
    	maior=0;
    	for(int i=1;i<=A;i++){
    		if(aeros[i]>=maior){
    			maior=aeros[i];
			}
		}
    	n++;
    	printf("Teste %d\n",n);
    for(int i=1;i<=A;i++){
        if(aeros[i]==maior){
        	printf("%d ",i);
        }
    }
        printf("\n\n");
        scanf("%d %d",&A,&V);
    }
    
return 0;
}