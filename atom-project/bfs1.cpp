search(int s,vector<int> adj[],bool vis[])
{
  queue<int>Q;
  Q.push(s);
  vis[s]=1;
  while(!Q.empty())
  {
    int top = Q.front();
    //vis[top]=1;
    cout<<top<<" ";
    for(auto it = adj[top].begin();it!= adj[top].end();it++)
    {
      if(vis[*it]!=1)
      {
        Q.push(*it);
        vis[*it]=1;

      }
    }
    Q.pop();
  }
}
void bfs(int s,vector<int> adj[],bool vis[])
{
  //vis[s]=1;
  //cout<<s<<" ";
  int n = sizeof(adj)/sizeof(adj[0]);
  for(int i=1;i<=n;i++)
  {
    if(vis[i]!=1)
    {
      search(s,adj,vis);
    }
  }
}
