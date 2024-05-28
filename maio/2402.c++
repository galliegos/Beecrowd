#include <iostream>

 
using namespace std;
 
int main() {
    long long int n,i;

    cin>>n;
    for(i=2; i*i <=n;i++)
        if(n%i ==0){
            cout<<"S"<<endl;
            return 0;
        }
    
    cout<<"N"<<endl;
    return 0;
}