#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const long long int MAX = 2049;
int m[MAX][MAX];

vector<vector<unsigned long long>> prefixa(MAX, vector<unsigned long long>(MAX, 0));
//long long int prefixa [MAX][MAX];

long long int somasubmat(const vector<vector<unsigned long long>> &prefixaux, int row1, int col1, int row2, int col2)
{
   
    return prefixaux[row2][col2] - prefixaux[row1 - 1][col2] - prefixaux[row2][col1 - 1] + prefixaux[row1 - 1][col1 - 1];
}
/*long long int somasubmat(long long int prefixaux[][MAX] , int row1, int col1, int row2, int col2)
{
   
    return prefixaux[row2][col2] - prefixaux[row1 - 1][col2] - prefixaux[row2][col1 - 1] + prefixaux[row1 - 1][col1 - 1];
}*/

int main()
{
    int n;
    cin >> n;
   	long long int g;
    cin >> g;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            m[i][j] = a;
             prefixa[i][j] = a +
                            prefixa[i - 1][j] +
                            prefixa[i][j - 1] -
                            prefixa[i - 1][j - 1];

            
        }
    }
    
    

    for (int x = 1; x <= n; x <<= 1)
    {
        bool bol = true;
        for (int i = 1; i <= n; i += x)
        {
            for (int j = 1; j <= n; j += x)
            {
                unsigned long long s;
                s = somasubmat(prefixa, i, j, i + x - 1, j + x - 1);  //conseguir a soma da submatriz nos limites definidos
                if (s < g)
                {
                    bol = false;
                    break;
                }
            }
            if (!bol)
                break;
        }
        if (bol)
        {

            long long resposta = (n * n) / (x * x);
             cout << resposta << endl;
            return 0;
        }
    }
    

    cout << 0 << endl;

return 0;
}