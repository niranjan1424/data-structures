#include<stdio.h>
int a[10][10],vis[10],i,j,n,front=-1,rear=-1,queue[10];
void bfs(int v)
{
	for(i=0;i<n;i++)
	{
		if(a[v][i]&&!vis[i])
		{
			queue[++rear];
			if(front<=rear)
			{
				vis[queue[front]]=1;
				bfs(queue[front++]);
			}
		}
	}
}
int main()
{
	int v;
	printf("enter thr number of vertices:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		queue[i]=0;
		vis[i]=0;
	}
	printf("enter thematrixx");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("enter the starting vertix");
	scanf("%d",&v);
	bfs(v);
	printf("the node which reacheqble is :");
	for(i=0;i<n;i++)
	{
		if(vis[i])
		{
			printf("%d",i);
		}
		else
		{
			printf("not reachebale");
		}
	}
	return 0;
}
