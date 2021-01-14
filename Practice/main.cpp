#include <bits/stdc++.h>
using namespace std;

struct Graph
{
	int N;
	int E;
	int **adj;
};

struct Graph* Matrix();

int main()
{
	struct Graph *p=Matrix();
	// for(int i=0;i<p->N;i++)
	// 	for(int j=0;i<p->E;j++)
	// 		printf("%d",p[i][j]);

	return 0;
}

struct Graph* Matrix()
{
	struct Graph *G =(struct Graph*)malloc(sizeof(struct Graph));
	if(G==NULL)
	{
		printf("Can't Assign any Size of Variable");
		return 0;
	}

	else{

	printf("Enter number of vertexes and number of nodes");
	scanf("%d %d",&G->N,&G->E);
	G->adj*=(struct Graph**)malloc(sizeof(int)*(G->N*G->E));
	for(int i=0;i<G->N;i++)
		for(int j=0;j<G->E;j++)
			G->adj[i][j]=0;

	printf("Enter the edges of this matrix");
	for(int i=0;i<G->N;i++)
		for(int j=0;j<G->E;j++)
		{
			G->adj[i][j]=1;
			G->adj[j][i]=1;
		}

			return(G);
	}
}









