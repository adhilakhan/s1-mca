#include <stdio.h>
#define MAX 10

// Graph G with V vertices
int G[MAX][MAX] = {0}, V;
// for tracking visited nodes ,Queue front and rear
int Visted[MAX]={0}, Q[MAX], F = -1, R = -1;

int read()
{
    int ip;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    if(V<=MAX)
    {
    printf("Input the adjaceny matirx: \n");
    printf("if (i,j) has an edge then input 1 else 0\n");

    for (int i = 1; i <= V; i++)
    {
        for (int j = i; j <= V; j++)
       {
            if (i != j)
            {
                printf("(%d,%d)=>", i, j);
                scanf("%d", &ip);
                G[i][j] = G[j][i] = ip;
            }
        }
    }
    return 1;
    }
    else
        return 0;
}
void display()
{
    printf("The adjaceny matrix is:\n");
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }
}
void bfs(int x)
{
    printf("BFS:\n");
    F = R = 1;
    Q[R] = x;
    Visted[x]=1;
    printf("%d ", x);
    while(F<=R)
    {
        x = Q[F];
        F += 1;
        for (int j = 1; j <= V; j++)
        {
            if (G[x][j] && !Visted[j])
            {
                printf("%d ", j);
                Visted[j] = 1;
                R += 1;
                Q[R] = j;
            }
        }
    }
}
int main()
{
if(read())
{
    display();
    int x;
    printf("Enter the starting vertex: "); 
    scanf("%d", &x);
     if(x>0&&x<=V)
     {
        printf("BFS Traversal of the given graph is : \n");
          bfs(x);
     }
    else 
        printf("\n No Such Vertex : ");
}
else
    printf("Invalid size Entery !!!");
return 0;
}