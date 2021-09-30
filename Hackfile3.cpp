#include<stdio>
int n,a[50][50],v,f=0,r=-1,u,q[15],visited[100],reach[100];

void bfs()
{

q[++r] = v;
visited[v] = 1;
while(f<=r)
{
u = q[f++];
for(i=1; i<=n; i++)
{
if(a[u][i] == 1 && !visited[i])
{
q[++r] = i;
visited[i] = 1;
printf("->%d", i);
}
}
}
}

void dfs(int source)
{
int i;
reach[v]=1;
for(i=1; i<=n; i++)
{
if(a[v][i] == 1 && !reach[i])
{
printf("-> %d",i);
dfs(i);
}
}
}
void main()
{
printf("\nEnter the number of vertices of the digraph: ");
scanf("%d", &n);
printf("\nEnter the adjacency matrix of the graph:\n");
for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
scanf("%d", &a[i][j]);

printf("Enter Starting Vertex");
scanf("%d",&v);
if(v>0&&v<n)
{
 printf("%d",&v);
 dfs(v);
}
if(v>0&&v<n)
{
 printf("%d",&v);
 bfs(v);
}

for(i=u;i<=r;i++)
{
 visited[i]=0;
 q[i]=0;
reach[i]=0;
}
}
