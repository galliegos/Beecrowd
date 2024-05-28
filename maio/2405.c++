#include <bits/stdc++.h>
using namespace std;
const int MAX=205;
int screen[MAX][MAX];
int cont=1;
// Function that returns true if
// the given pixel is valid
bool isValid(int n, int m, int x, int y,
             int prevC, int newC)
{
    if (x < 0 || x >= n || y < 0 || y >= m
        || screen[x][y] != prevC || screen[x][y] == newC)
        return false;
    return true;
}
 
// FloodFill function
void floodFill(int n, int m, int x, int y,
               int prevC, int newC)
{
    queue<pair<int, int> > queue;
 
    // Append the position of starting
    // pixel of the component
    pair<int, int> p(x, y);
    queue.push(p);
 
    // Color the pixel with the new color
    screen[x][y] = newC;
 
    // While the queue is not empty i.e. the
    // whole component having prevC color
    // is not colored with newC color
    while (queue.size() > 0) {
        // Dequeue the front node
        pair<int, int> currPixel = queue.front();
        queue.pop();
 
        int posX = currPixel.first;
        int posY = currPixel.second;
 
        // Check if the adjacent
        // pixels are valid
        if (isValid(n, m, posX + 1, posY, prevC,
                    newC)) {
            // Color with newC
            // if valid and enqueue
            screen[posX + 1][posY] = newC;
            p.first = posX + 1;
            p.second = posY;
            queue.push(p);
            cont++;
        }
 
        if (isValid(n, m, posX - 1, posY, prevC,
                    newC)) {
            screen[posX - 1][posY] = newC;
            p.first = posX - 1;
            p.second = posY;
            queue.push(p);
            cont++;
        }
 
        if (isValid(n, m, posX, posY + 1, prevC,
                    newC)) {
            screen[posX][posY + 1] = newC;
            p.first = posX;
            p.second = posY + 1;
            queue.push(p);
            cont++;
        }
 
        if (isValid(n, m, posX, posY - 1, prevC,
                    newC)) {
            screen[posX][posY - 1] = newC;
            p.first = posX;
            p.second = posY - 1;
            queue.push(p);
            cont++;
        }
        if (isValid(n, m, posX +1, posY + 1, prevC,
                    newC)) {
            screen[posX +1][posY +1] = newC;
            p.first = posX+1;
            p.second = posY + 1;
            queue.push(p);
            cont++;
        }
        if (isValid(n, m, posX -1, posY - 1, prevC,
                    newC)) {
            screen[posX -1][posY -1] = newC;
            p.first = posX-1;
            p.second = posY - 1;
            queue.push(p);
            cont++;
        }
        if (isValid(n, m, posX +1, posY - 1, prevC,
                    newC)) {
            screen[posX +1][posY -1] = newC;
            p.first = posX+1;
            p.second = posY - 1;
            queue.push(p);
            cont++;
        }
        if (isValid(n, m, posX -1, posY + 1, prevC,
                    newC)) {
            screen[posX -1][posY +1] = newC;
            p.first = posX-1;
            p.second = posY + 1;
            queue.push(p);
            cont++;
        }
    }
}
 
int main()
{
	int n,m,u,x,y,v,c,k;
	cin>>n>>m>>x>>y>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			screen[i][j]=0;
		}
	}
	for(int p=0;p<k;p++){
		cin>>v>>c;
		v--;c--;
		screen[v][c]=1;
		
	}
 	x--;y--;
    // Co-ordinate provided by the user
    
 
    // Current color at that co-ordinate
    int prevC = screen[x][y];
 
    // New color that has to be filled
    int newC = 1;
    floodFill(n, m, x, y, prevC, newC);
 
    // Printing the updated screen
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << screen[i][j] << " ";
        }
        cout << endl;
    }*/
    
    cout<<cont<<endl;
 
    return 0;
}