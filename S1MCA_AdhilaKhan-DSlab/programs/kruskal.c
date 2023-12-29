#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int parent[MAX];
int find(int i){ 
	while(parent[i])
	 	i=parent[i]; 
	return i; 
} 
						  
int uni(int i,int j){
	if(i!=j){  
		parent[j]=i; 
		return 1; 
	} 
	return 0; 
} 
	 
	 
int main(){  
    int vertex_array[MAX],i;
	int vertex_count=0;
	int row,column;
	int cost_matrix[MAX][MAX];
	int edge_count=0,count=1;
	int sum_cost=0,min_cost;
	int row_no,column_no,edge1,edge2;
	
	printf("Implementation of Kruskal's algorithm\n\n");
	printf(" Enter the total no of vertex :: ");
	scanf("%d",&vertex_count);
    if(vertex_count<=MAX)
	{
	printf("\n-- Enter the vertices -- \n\n");
	for(i=1;i<=vertex_count;i++)
    {
		printf("vertex[%d] :: ",i);
		scanf("%d",&vertex_array[i]);
	}

	printf("\n Enter the cost effective matrix : \n");	
	for(row=1;row<=vertex_count;row++)
    {
		for(column=1;column<=vertex_count;column++)
        {
			scanf("%d",&cost_matrix[row][column]);
			if(cost_matrix[row][column] == 0)
            {
				cost_matrix[row][column] = 999;
			}
		}
	}
	
	edge_count = vertex_count-1;
	
	while(count <= edge_count)
    {
		for(row=1,min_cost=999;row<=vertex_count;row++)
        {
			for(column=1;column<=vertex_count;column++)
            {
				if(cost_matrix[row][column] < min_cost)
                {
						min_cost = cost_matrix[row][column];
						edge1 = row_no    =  row;
						edge2 = column_no =  column;
				}
			}
		}   
 
		row_no    = find(row_no); 
		column_no = find(column_no);  
		
		if(uni(row_no,column_no))
        {  
			printf("\nEdge %d is (%d -> %d) with cost : %d ",count++,vertex_array[edge1],vertex_array[edge2],min_cost);
			sum_cost = sum_cost + min_cost;
		}
		cost_matrix[edge1][edge2] = cost_matrix[edge2][edge1] = 999;
	}    
	printf("\n Minimum cost=%d",sum_cost);  
    }
    else
		printf("\n Invalid size entry!!!");
	return 0;
} 