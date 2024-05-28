#include <bits/stdc++.h>
using namespace std;
int main(){
int n=1,a,b,x,y;
int t=1;
int resp=0;
while(n!=0){
    x=0;y=0;
    resp=0;
    cin>>n;
    if(n==0)
        return 0;
    cout<<"Teste "<<t<<endl;
    for(int i=0;i<n;i++){ 
        cin>>a>>b;
        x+=a;
        y+=b;
        resp = (x-y);
        cout<<resp<<endl;
        
    }
    cout<<endl;
    t++;
}
     return 0;

}