#include <stdio.h>
#define MAX 10
// stack, top of stack, adjacency matrix, visted vertices,number of vertices
int stk[MAX], top = -1, adj[MAX][MAX] = {0}, visted[MAX] = {0}, N;

int read()
{
    int ch;
    printf("Enter the no of vertices: ");
    scanf("%d", &N);
    if(N<=MAX)
    {
    printf("Enter the adjaceny matrix: ");
    printf("if (i,j) has an edge then input 1 else 0 ::\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            if (i != j)
            {

                printf("(%d,%d):", i, j);
                scanf("%d", &ch);
                adj[i][j] = adj[j][i] = ch;
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
    printf("Adjacency matrix is:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}
void dfs(int start)
{
    int curV = start;
    visted[curV] = 1;
    printf("%d ", curV);
    stk[++top] = curV;
    while (top!=-1)
    {
        for (int i = 1; i <= N; i++)
        {
            if (adj[curV][i] && !visted[i])
            {
                curV = i;
                printf("%d ", curV);
                stk[++top] = curV;
                visted[curV] = 1;
            }
        }
        curV = stk[--top];
    }
}

int main()
{
    int start;
if(read())
{
    display();
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    if(start>0 &&start<=N)
      {
        printf("BFS Traversal of the given graph is : \n");
         dfs(start);
     }
    else 
        printf("\n No Such Vertex : ");
}
else
    printf("Invalid size Entery !!!");
    return 0;
}