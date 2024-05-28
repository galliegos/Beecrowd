#include <stdio.h>
#include <math.h>

int main()
{
  int n=1, teste=1;
  while (n!=0){
  	scanf("%d",&n);
  	if(n==0)
  		return 0;
  		int resp=pow(2,n);
      printf("Teste %d\n%d\n\n",teste, (resp - 1));
      teste++;
    }
  return 0;
}