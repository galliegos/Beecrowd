#include <stdio.h>

int main () {
    int n;
    int P,Q,R,S,X,Y;
    int k,h;

    scanf("%d",&n);
    scanf("%d %d %d %d %d %d",&P,&Q,&R,&S,&X,&Y);
    scanf("%d %d",&k,&h);

    long long int C = 0;
    for(int h1 = 1;h1 <= n;h1++){
        C+=(((P * k + Q * h1) % X) * ((R * h1 + S * h) % Y));
    }
    

    printf("%lld\n",C);
    return 0;
}