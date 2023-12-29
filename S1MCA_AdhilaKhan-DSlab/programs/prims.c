#include<stdio.h>

#define MAX 10

int main()
{
	int vertex_array[MAX];
	int vertex_count=0;
	int i,j;
	int cost_matrix[MAX][MAX];
	int visited[MAX]={0};
	int edge_count=0,count=1;
	int sum_cost=0,min_cost=0;
	int row_no,column_no,vertex1,vertex2;
	
	printf("Total no of vertex :: ");
	scanf("%d",&vertex_count);
	if(vertex_count<=MAX)
	{
	printf("\n-- Enter the vertices -- \n\n");
	for(i=1;i<=vertex_count;i++){
		printf("vertex[%d] :: ",i);
		scanf("%d",&vertex_array[i]);
	}
	printf("\nEnter the cost adjacency matrix : \n -- MATRIX --\n\n");
	//Get edge weight matrix from user	
	for(i=1;i<=vertex_count;i++){
		for(j=1;j<=vertex_count;j++){
			scanf("%d",&cost_matrix[i][j]);
			if(cost_matrix[i][j] == 0){
				cost_matrix[i][j] = 999;
			}
		}
	}
	
	printf("\n");
	visited[1]=1;
	edge_count = vertex_count-1;
	
	while(count<= edge_count)
    {
		for(i=1,min_cost=999;i<=vertex_count;i++)
        {
			for(j=1;j<=vertex_count;j++)
            {
				if(cost_matrix[i][j] < min_cost)
                {
					if(visited[i] != 0)
                    {
						min_cost = cost_matrix[i][j];
						vertex1 = row_no =i;
						vertex2 = column_no =j;
					}
				}
			}
		}
		
		if(visited[row_no] == 0 || visited[column_no] ==0){
			printf("\nEdge %d is (%d -> %d) with cost : %d ",count++,vertex_array[vertex1],vertex_array[vertex2],min_cost);
			sum_cost = sum_cost + min_cost;
			visited[column_no]=1;
		}
	cost_matrix[vertex1][vertex2] = cost_matrix[vertex2][vertex1] = 999;
	}
	printf("\n\nMinimum cost=%d",sum_cost); 
	
	}
	else
		printf("\n Invalid size entry!!!");
	return 0;
}