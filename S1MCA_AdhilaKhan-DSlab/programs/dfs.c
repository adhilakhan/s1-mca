#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>

#define MAX 6

//vertex count
int vertex_count =0;

// vertex definitions
struct vertex{
	char data;
	int visited;
};

//array of vertices
struct vertex *graph[MAX];

//adjacency matrix
int adj_matrix[MAX][MAX];

//stack

int stack[MAX];
int top = -1;

void push(int data){
	stack[++top]=data;
}

int pop(){
	return stack[top--];
}

int peek(){
	return stack[top];
}

int is_stack_empty(){
	return top == -1;
}

//add vertex to the vertex list
void add_vertex(char data){
	struct vertex *v = (struct vertex*)malloc(sizeof(struct vertex));
	v->data = data;
	v->visited = 0;
	graph[vertex_count]=v;
	vertex_count++;
}

//add edge to edge array
void add_edge(int start,int end){
	adj_matrix[start][end]=1;
	adj_matrix[end][start]=1;
}

// to return adjacent vertex
int adj_vertex(int vertex_get){
	int i;
	for(i=0;i<vertex_count;i++){
		if(adj_matrix[vertex_get][i] == 1 && graph[i]->visited == 0){
			return i;
		}
	}
	return -1;
}

// to display vertex value
void display_vertex(int pos){
	printf("%c ",graph[pos]->data);
}

void dfs(){
	int i;
	int unvisited;
	printf("\n|||||||||||||||||||||||||||||||\n");
	graph[0]->visited =1;
	display_vertex(0);
	push(0);
	
	while(!is_stack_empty()){
		int unvisited = adj_vertex(peek());
		
	    if(unvisited == -1){
	    	pop();
	    }
	    else{
	    	graph[unvisited]->visited = 1;
			display_vertex(unvisited);
			push(unvisited);
	    }
	}
	printf("\n|||||||||||||||||||||||||||||||\n");
	for(i=0;i<vertex_count;i++){
		graph[i]->visited = 0;
	}
}

void show(){
	int i;
	printf("\n.................................\n");
	for(i=0;i<vertex_count;i++){
		printf("Edge postion of '%c' is %d\n",graph[i]->data,i);
	}
	printf(".................................\n");
}


int main(){
	char data;
	int edge_1,edge_2;
	int i, j;
    int x,y;
    printf("\n Enter the number of vertices : ");
    scanf("%d",&x);
    if(x<=MAX)
    {
    printf("\n Enter the number edges : ");
    scanf("%d",&y);
    for(i = 0; i < x; i++)    // set adjacency 
      for(j = 0; j < x; j++) // matrix to 0
         adj_matrix[i][j] = 0;
    printf("\n Enter the verices : ");
	for(i=1;i<=x;i++)
	{
		printf("\nEnter name of the vertex %d : ",i);
		scanf(" %c", &data);
		add_vertex(data);
	}
	printf("\n Enter the details of %d edges : ",y);
	show();
	for(i=1;i<=y;i++)
	{
		printf("\n Enter starting and ending vertex of the edge %d : ",i);
		scanf("%d%d",&edge_1,&edge_2);
				if(vertex_count-1 < edge_1 || vertex_count-1 < edge_2)
				{
					printf("\nThere is no vertex !!\n");
					i--;
					continue;
				}
				else
					add_edge(edge_1,edge_2);
	}
	printf("\n The DFS traversal for the given graph is : ");
	dfs();
    }
	else 
	    printf("\n Ivalid number of vertex !!");
	return 0;
}