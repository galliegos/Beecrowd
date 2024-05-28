#include <bits/stdc++.h>
using namespace std;

int main(){
int n=1,A=0,N=0;
int t=1;
vector<pair<int,int>>alunos;
int resp=0;
while(n!=0){

    
    cin>>n;
    if(n==0)
        return 0;
    alunos.clear();
    
    for(int i=0;i<n;i++){ 
        cin>>A>>N;
        alunos.push_back(make_pair(A,N));
    }
    int maior=-1;
    for(auto[a,b]:alunos){
        if(b>maior)
            maior=b;
        //maior = max(maior,b);
    }
    cout<<"Turma "<<t<<endl;
    for(auto[a,b]:alunos){
        if(b==maior)
            cout<<a<<' ';
        //maior = max(maior,b);
    }
    cout<<endl<<endl;
    t++;
}
     return 0;

}