#include <bits/stdc++.h>

using namespace  std;



vector<pair<int, int>> combinacoespos = {{0, 1}, {0, 4}, {1, 2}, {1, 5}, {2, 3}, {2, 6}, {3, 7}, {4, 5}, {5, 6}, {6, 7},{1, 0}, {4, 0}, {2, 1}, {5, 1}, {3, 2}, {6, 2}, {7, 3}, {5, 4}, {6, 5}, {7, 6}};
vector<int> confin(8), conffi(8);


struct VectorHasher {
    int operator()(const vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
            hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
};


int dijkstra(const vector<int>& confin, const vector<int>& conffi) {
    unordered_map<vector<int>, int, VectorHasher> dist;
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> queue;

    dist[confin] = 0;
    queue.push({0, confin});

    while (!queue.empty()) {
        pair<int, vector<int>> top = queue.top();
        queue.pop();
        int v = top.first;
        vector<int> atual = top.second;

        if (atual == conffi) {
            return v;
        }

        for (auto aux : combinacoespos) {
            int x = aux.first;
            int y = aux.second;
            vector<int> novo = atual;
            swap(novo[x], novo[y]);                      //vai trocando as posicoes para fazer com que o vetor de atual vire a config final do container e vai calculando a distancia para isso

            int custo = v + atual[x] + atual[y];
            if (!dist.count(novo) || custo < dist[novo]) {
                dist[novo] = custo; 
                queue.push({custo, novo}); // joga os valores pra fila
            }
        }
    }

    return -1;
}

int main (void) {
    for (int i = 0; i < 8; i++){ 
	cin >> confin[i];//container inicial
    //cout<<"inicial=:"<<confin[i]<<" ";
	}
    for (int i = 0; i < 8; i++){ 
	cin >> conffi[i];//container final
    //	cout<<"final=:"<<conffi[i]<<" ";
	}
	int res = dijkstra(confin, conffi);
    cout << res << endl;
    
	return 0;
}