#include <stdio.h>
using namespace std;
#include <bits/stdc++.h>

int c, e, l, p;
char adj[51][51];
int dist[51], fila[51], ifila, ffila; //iteracao fila, fim fila

int main()
{
  int x, y, teste=1, i, primeiro;
  while (scanf("%d %d %d %d", &c, &e, &l, &p) == 4 && c > 0)
    {
      for(int i=0;i<51;i++){//size do adj
      	for(int j=0;j<51;j++){
      	adj[i][j]=adj[j][i]=0;
	  }
	  	}
      while (e!=0)
	{
	  cin>>x>>y;
	  adj[x][y] = adj[y][x] = 1;
	  e--;
	}
      for(int i=0;i<51;i++){ //size do dist
      	dist[i]=-1;
	  }
      dist[l] = 0;
      fila[0] = l;
      ifila = 0;
      ffila = 1;
      while (ifila < ffila && dist[fila[ifila]] < p)
	{
	  primeiro = fila[ifila];
	  for (i = 1; i <= c; i++)
	    if (adj[primeiro][i] && dist[i] == -1)
	      {
		fila[ffila++] = i;
		dist[i] = dist[primeiro] + 1;
	      }
	  ifila++;
	}
      printf("Teste %d\n", teste++);
      for (i = 1; i <= c; i++)
	if (i != l && dist[i] != -1)
	  cout<<i<<" ";
      cout<<endl<<endl;
    }
  return 0;
}