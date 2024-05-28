#include <stdio.h>

int main(){
	int n,a,melhor;
	int cam1,cam2;
    int maxcam =100001;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		
		scanf("%d",&a);
		scanf("%d",&x);
		cam1=0,cam2=0;
		for(int j=0;j<a-1;j++){
			int y;
			scanf("%d",&y);
			
			if(x>y){
				cam1+=(x-y);
			}else
				cam2+=(y-x);
			//printf("aa%d %d %d ",j,x,y);
			x=y;
		}
		if(cam1>cam2)
			cam1=cam2;
		if(cam1<maxcam){
			maxcam=cam1;
			melhor=i;
			
		}
		
	}
	printf("%d\n",melhor);
	
}