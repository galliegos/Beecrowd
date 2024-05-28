#include <iostream> 
#include <iomanip> 
#include<vector>
#include <algorithm>
using namespace std; 
const int MAX=1010;
 int n,m;
vector<vector<int>>M(MAX,vector<int>(MAX,0)); 
 void prefixSum() {
    //vertical prefixsum 
    for (int j = 0; j < m; j++) { 
        for (int i = 1; i < n; i++) { 
            M[i][j] += M[i-1][j]; 
        } 
    } 
    //horizontal prefixsum 
    for (int i = 0; i < n; i++) { 
        for (int j = 1; j < m; j++) { 
            M[i][j] += M[i][j-1]; 
        } 
    } 
} 
  
  
/*void print() { 
    for (int i = 0; i <n; i++) { 
        for (int j = 0; j <m; j++) { 
            cout << M[i][j] << " "; 
        } 
        cout << '\n'; 
    } 
} */
int main() 
{ 
  	int s;
   cin>>n>>m>>s;
   for(int i=0;i<s;i++){
   	int a,b,c;
   	cin>>a>>b>>c;
   	a--;b--;
   	M[max(a-c,0)][max(b-c,0)]+=1;
   	M[min(a+c+1,n)][min(b+c+1,m)]+=1;
   	M[max(a-c,0)][min(b+c+1,m)]+=-1; 
   	M[min(a+c+1,n)][max(b-c,0)]+=-1;
   	
   	
   	
   }
   prefixSum();
   long long int sum=0;
   for (int i = 0; i <n; i++) { 
        for (int j = 0; j <m; j++) { 
        	sum+=M[i][j];
    }
}
	//cout<<sum<<endl;
	sum/=(n*m);
	cout<<sum<<endl;
	}