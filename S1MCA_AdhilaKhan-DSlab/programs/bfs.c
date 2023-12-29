#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

#define MAX 10

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

//Queuee

int queue[MAX];
int rear=-1;
int front=0;
int queue_count=0;

void enqueue(int data){
	queue[++rear]=data;
	queue_count++;
}

int dequeue(){
	queue_count--;
	return queue[front++];
}

int is_queue_empty(){
	return queue_count == 0;
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
	printf("%c -> ",graph[pos]->data);
}

void bfs(struct vertex *start_vetex,int start){
	if(!start_vetex){
		printf("\nNothing to display\n");
		return;
	}
	    
	int i;
	int unvisited;
	
	printf("\n|||||||||||||||||||||||||||||||\n");
	
	start_vetex->visited =1;
	display_vertex(start);
	enqueue(start);
	
	while(!is_queue_empty()){
		int pop_vertex = dequeue();
		//printf("\npoped : %d",pop_vertex);
		while((unvisited = adj_vertex(pop_vertex))!=-1){
			graph[unvisited]->visited = 1;
			display_vertex(unvisited);
			enqueue(unvisited);
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
	int opt;
	char data;
	int edge_1,edge_2;
	int i, j;
	int start;
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
			
				printf("\nEnter starting vertex position for BFS traversal: ");
				scanf("%d",&start);
				printf("\n The BFS traversal for the given graph is : ");
				bfs(graph[start],start);
	}
		else 
	    printf("\n Ivalid number of vertex !!");
	return 0;
}

