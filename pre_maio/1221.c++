#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c,t,x,m=0,mi,aux=1,ret;
    bool bol = false;
    cin >> n >> c >> t;
    int seq[n];
    for (int i = 0; i < n; i++){
        cin >> seq[i];
        if(m<seq[i])
        	m=seq[i];
    }
    x = pow(2,ceil(log2(m/t))); //para chutar um tempo e fazer como se uma busca binaria
   // cout<<x<<m<<t<<" "<<(log2(m/t))<<"testando1"<<endl;
    mi = x/2;         
    while (aux != 0){
        int auxs = 0;
        int cont = 0;
        
        for (int i = 0; i < n; i++){
            if (ceil(seq[i]*1.0/t) > x || cont == c){
                cont = c+1;
                break;
            }
            if (ceil((auxs + seq[i])/(t*1.0)) <= x){
                auxs += seq[i];
            } else {
                cont++;
                auxs = seq[i];
            }
        }
       // cout<<cont<<"testando"<<endl;
        cont++;
        aux = (x-mi)/2;
        //cout<<aux<<"testando"<<endl;
        if (cont <= c){
        	bol = true;
            ret = x;
            
            x -= aux;
        } else if (bol){
            mi = x;
            x += aux;
        } else {
            
            mi = x;
            aux = 1;
            x = x*2;
        }
    }
    cout << ret << endl;
    return 0;
}