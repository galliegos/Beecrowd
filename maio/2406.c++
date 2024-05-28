#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <stack>




int main(){
	int n;
	cin>>n;
	string exp;
	bool bol=true;
	for(int i=0;i<n;i++){
		stack<char> q;
		bol=true;
		cin>>exp;
		for(int j=0;j<exp.size();j++){
			if(exp[j]=='[' or exp[j]=='{' or exp[j]=='(')
				q.push(exp[j]);
			else
			{

				if (q.empty())
				{

					bol = false;
					break;

				}

			//	printf("%c %c\n", q.top(),exp[j]);

				if (exp[j] == '}' && q.top() == '{')
					q.pop();
				else if (exp[j] == ']' && q.top() == '[')
					q.pop();
				else if (exp[j] == ')' && q.top() == '(')
					q.pop();
				else
				{

					bol = false;
					break;

				}

			}
		}
		if(!(q.empty()))
			bol=false;
		
		if(bol==true){
		cout<<"S"<<endl;
	}
	else
		cout<<"N"<<endl;
	
	}
	
}
