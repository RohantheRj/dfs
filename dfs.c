#include<stdio.h>
int adj[10][10],visited[10],n;
void dfs(int v){
int i;
visited[v]=1;
printf("%d ",v);
for(i=0;i<n;i++){
if(adj[v][i]==1 && visited[i]==0){
dfs(i);
}
}
}
int main(){
int e,i,j,u,v,start;
scanf("%d%d",&n,&e);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
adj[i][j]=0;
}
visited[i]=0;
}
for(i=0;i<e;i++){
scanf("%d%d",&u,&v);
adj[u][v]=1;
adj[v][u]=1;
}
scanf("%d",&start);
dfs(start);
return 0;
}
