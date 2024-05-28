#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
const int MAX = 420;

vector<vector<int>> adj(MAX);
vector<bool> vec(MAX, false);

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vec[s] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto u : adj[v])
        {
            if (!vec[u])
            {
                q.push(u);
                vec[u] = true;
            }
        }
    }
}

int main(){
    int teste = 1;
    int n,m;
    cin>>n>>m;
    while (n!=0 or m!=0){
        
        adj.assign(MAX, vector<int>());
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >>x>>y;
            x-=1, y-=1;
            adj[x].push_back(y); //crtiando as adjacencias
            adj[y].push_back(x);
        }

        vector<int> resp;
        for (int i = 0; i < n; i++)
        {
            vec.assign(MAX, false);
            vec[i] = true;
            if (i != n - 1)
                bfs(i + 1);
            else
                bfs(0);
            for (int j = 0; j < n; j++)
            {
                if (vec[j] == false)
                {
                    resp.push_back(i + 1);
                    break;
                }
            }
        }
        cout << "Teste " << teste << endl;
        
        if (resp.empty())
            cout << "nenhum";
        else
        {
            for (auto h : resp)
            {
                cout << h << ' ';
            }
        }
        cout << endl << endl;
        teste++;
        cin>>n>>m;
    }

    return 0;
}