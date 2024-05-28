#include <stdio.h>

int main(){
	int n,teste=1,base,mult;
	scanf("%d",&n);
	while(n!=-1){
		base=2;
		mult=1;
		
		
		for(int i=0;i<n;i++){
			base+=mult;
			mult*=2;
		}
		printf("Teste %d\n",teste);
        teste++;
        printf("%d\n\n",base*base);
        scanf("%d",&n);
	}
	
}