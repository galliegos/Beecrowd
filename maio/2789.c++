#include <bits/stdc++.h>

#include <unordered_set>
#include <utility>
#include<vector>
using namespace std;
#define endl         "\n"
#define _ ios_base :: sync_with_stdio(0); cin.tie(0);




const int MAX = 5010;

unsigned long long qa[MAX];
int vis[MAX], ql[MAX][MAX];
vector<int> rua[MAX];
pair<int, int> valor_casa[MAX];
unordered_set<int> c[MAX];
unsigned long long mat[MAX][MAX];
int n, d;

unsigned long long knapspack() {
    for (int i = 1; i <= n; i++)
        for (int P = 1; P <= d; P++) {
            if (P >= valor_casa[i-1].second)mat[i][P] = max(mat[i-1][P], mat[i - 1][P - valor_casa[i-1].second] + qa[valor_casa[i-1].first]);
            else mat[i][P] = mat[i - 1][P];
        }

    return mat[n][d];
}

int bfs(int ini, int d, int u) {
    int aux = 0;

    if (c[d].count(ini))aux = ql[d][ini];
    vis[ini] = u;
	
    for (auto vizinho : rua[ini])
        if (vis[vizinho] != u) aux += bfs(vizinho, d, u);

    qa[ini] += aux;

    return aux;
}

int main(void) {
    int m;

    cin>>n>>d;

    int a, b;
    for (int i = 0; i < n - 1; i++) {
        cin>>a>>b;
        rua[a].push_back(b);
        rua[b].push_back(a);
    }

    cin>>m;
    int casa, valor;
    for (int i = 0; i < m; i++) {
        cin>>casa>>valor;
        valor_casa[i] = {casa, valor};
    }

    int q;
    cin>>q;
    int x, y, l;
    for (int i = 0; i < q; i++) {
        scanf("%d%d%d",&x,&y,&l);
        ql[x][y] += l;
        c[x].insert(y);
    }

    for (int i = 1; i < n; i++) bfs(i, i, i);

    cout<<knapspack()<<endl;
return 0;
}