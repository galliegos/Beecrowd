#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

vector<vector<int> > adj;
vector<pair<int, int> > v;
vector<int> pai;
vector<int> vis;
priority_queue<int> q;

void busca(int o){
    for (int i = 0; i < adj[o].size(); i++){
        int aux = adj[o][i];
        v[aux].first = v[o].first-1;
        busca(aux);
    }
}

int dfs(int o){
    if (vis[o] != -1) return vis[o];
    int m = 0;
    for (int i = 0; i < adj[o].size(); i++){
        int tam = dfs(adj[o][i]);
        if (tam > m){
            if (m != 0) q.push(m);
            m = tam;
        } else q.push(tam);
    }
    vis[o] = m+1;
    return vis[o];
}

int main() {
    int n, m, x;
    cin >> n >> m;
    adj.resize(n);
    vis.push_back(-1);
    v.push_back(make_pair(n,0));
    pai.push_back(-1);
    for (int i = 1; i < n; i++){
        vis.push_back(-1); //inicializando
        v.push_back(make_pair(n,i));
        cin >> x;
        x--;
        pai.push_back(x);    //preenchendo a arvore
        adj[x].push_back(i); //preenchendo a matriz de adjacencia
    }
    busca(0);
    sort(v.begin(), v.end());
    int resposta;
    for (int i = 0; i < n; i++){
        resposta = dfs(v[i].second);          
    }
    for (int i = 0; i < m-1; i++){
        resposta += q.top();
        q.pop();
    }
    cout<<resposta<< endl;
    return 0;
}