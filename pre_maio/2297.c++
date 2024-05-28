#include <stdio.h>
#include <stdlib.h>
int main(){
    int r=1,a,b,vencedor,rodada=1,aldo=0,beto=0;
    while(1){
        scanf("%d",&r);
        if(r==0)
            return 0;
        for(int i=0;i<r;i++){
            scanf("%d %d",&a,&b);
            aldo+=a;
            beto+=b;
        }
        if(aldo>beto)
            printf("Teste %d\nAldo\n\n",rodada);
        if(beto>aldo)   
            printf("Teste %d\nBeto\n\n",rodada);
        aldo=0;
        beto=0;
        rodada++;
    }
}