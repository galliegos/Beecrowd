#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    int teste=1;
    cin>>t;
    while(t!=0){ 
        map<int,vector <string>> pontuacoes;
        for(int i=0;i<t;i++){
            string nome;
            cin>>nome;
            int maior=0;
            int menor=1001;
            int soma=0;
            for(int j=0;j<12;j++){
                int aux;
                cin>>aux;
                soma+=aux;
                if(aux>maior)
                    maior=aux;
                if(menor>aux)
                    menor=aux;
            }
            soma-=(maior+menor);
            pontuacoes[soma].push_back(nome);

        }
        int aux=1;
        int auxaux=0;
        auto iterador=pontuacoes.rbegin();
        cout<<"Teste "<<teste<<endl;
        while(iterador!=pontuacoes.rend()){
            sort(iterador->second.begin(),iterador->second.end());
            for(int i=0;i<iterador->second.size();i++){

                cout<<aux<<" "<<iterador->first<<" "<<iterador->second[i]<<endl;
                auxaux++;
            }
            aux+=auxaux;
            iterador++;
            auxaux=0;
        }
        teste++;
        cout<<"\n";
        








        cin>>t;
    }
}