#include <stdio.h>
#define MAX 10
void main()
{
    int adj[MAX][MAX] = {0}, N, visited[MAX] = {0};
    printf("Enter the number of vertices:");
    scanf("%d", &N);
    if(N>MAX)
        printf("Invalid size entry !!!");
    else
    {
    printf("Enter the adj matri:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("The topological sorting is: ");
    int count = 0, current,flag;

       while (count != N)
    {

        for (int i = 1; i <= N; i++)
        {
            flag = 1;
            if (!visited[i])
            {
                for (int j = 1; j <= N; j++)
                {

                    if (adj[j][i])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    current = i;
                    printf("%d ", current);
                    visited[current] = 1;
                    count += 1;
                    for (int i = 1; i <= N; i++)
                     {
                          adj[current][i] = 0;
                    }
                }
            }
            
        }        
      
    }
    }
}