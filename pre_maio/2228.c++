#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int poss [11000];
int valor[100];


int main()
{
    int max,meta,soma,teste=1,x,y,n;
    cin>>x>>y>>n;
    while(x!=0 or y!=0 or n!=0){
        soma=0;
        for(int i=0;i<n;i++){
            cin>>valor[i];
            soma+=valor[i];
        }
        cout<<"Teste "<<teste<<endl;
        if((soma+x+y)%2!=0)//se for impar nao da para separar
            cout<<"N"<<endl<<endl;
        else{
            meta=(soma+x+y)/2 -x; //meta para y
            memset(poss,0,sizeof(poss)); //setar tudo em possivel para 0, pois usarei como vetor boolean;
            poss[0]=1; //para inicializar 
            max=0;
            for(int i=0;i<n;i++){
                for(int j=max;j>=0;j--){          //loop para setar para possivel as somas dos valores das joias
                    if(poss[j]==1)              
                        poss[j+valor[i]]=1;  
                }
                max+=valor[i];
            }
            if(poss[meta]==1){
                cout<<"S"<<endl<<endl;
            }
            else
                cout<<"N"<<endl<<endl;
        }
        
        
        
        
        
        
        cin>>x>>y>>n;
        teste++;
    }
    return 0;
}