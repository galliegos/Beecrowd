#include <bits/stdc++.h>
using namespace std;
#include<vector>

int main(){
    
	int n,media,medidas,teste=1;
	vector<int> v;
	vector<int> resp;
	cin >> n >> medidas;
	
	while(n!=0&&medidas!=0){
		int x=medidas;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);	
		}
		
		int respo=0;
		for(int i=0;(i+(medidas-1))<n;i++){
			for(int j=0;j<medidas;j++){
				respo+=v[i+j];
			//	cout<< "b"<<v[i+j]<<endl;
			}
			media=respo/medidas;
			resp.push_back(media);
			respo=0;
		}
		sort(resp.begin(),resp.end());
		/*for (auto x : resp) 
            cout << "a" << x << " ";*/
	
		cout<<"Teste "<<teste<<"\n"<<resp[0]<<" "<<resp[resp.size()-1]<<"\n"<<endl;
		teste++;
		resp.clear();
		v.clear();
		cin >> n >> medidas;
	}
	
}