#include <bits/stdc++.h>

using namespace std;


const int INF = 0x3f3f3f3f;
const long long int MAX = 10000001;

class No
{

public:
    int Id;
    int filhoC, filhoE;
    No(int Id, int filhoC, int filhoE) : Id(Id), filhoC(filhoC), filhoE(filhoE) {}
};

vector<int> vet(MAX, 0);

bool ordena(No x, No y)
{
    return x.Id < y.Id;
}

int bfs(vector<No> &g, int x,bool l)
{
    queue<int> queue;
    int res = 0;
    queue.push(x);
    while (!queue.empty())
    {
        int v = queue.front();
        queue.pop();
        auto a = g[v];

        if (a.filhoC != 0)
            queue.push(a.filhoC);
        if(l){
		
       		if (a.filhoE != 0)
            	queue.push(a.filhoE);
            vet[a.filhoE] = 0;
        }
        vet[a.filhoC] = vet[v] + 1;
        if (a.filhoC != 0)
            res = max(res, vet[a.filhoC]);
    }

    return res;
}


int main()
{
    int N;
    cin >> N;
    int I, L, K;
    vector<No> gE;
    gE.push_back(No(0, 0, 0));
    for (int i = 0; i < N; i++)
    {
        cin >> I >> L >> K;
        No aux(I, K, L);
        gE.push_back(aux);
    }

    int M;
    cin >> M;
    int P, Q, R;
    vector<No> gD;
    gD.push_back(No(0, 0, 0));
    for (int i = 0; i < M; i++)
    {
        cin >> P >> Q >> R;
        No aux(P, Q, R);
        gD.push_back(aux);
    }

    sort(gE.begin(), gE.end(), ordena);
    sort(gD.begin(), gD.end(), ordena);

    int resu1 = bfs(gD, 1,false);
    vet.assign(MAX, 0);
    int resu2 = bfs(gE, 1,false);
    vet.assign(MAX, 0);
    int resu3 = bfs(gE, 1,true);
    vet.assign(MAX, 0);
    int resu4 = bfs(gD, 1,true);

    int res = max(min(resu1, resu3), min(resu2, resu4));
    cout << N + M - res -1<< endl;
	return 0;
}