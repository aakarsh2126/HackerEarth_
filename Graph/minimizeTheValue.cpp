//Author-Ankit Mishra
//Minimize The Value
    #include <bits/stdc++.h>
    using namespace std;
    vector <int> adj[100005];
    int n,X;bool vis[100005];
    long long int val[100005];
    long long int totsum=0;
     
    long long int dfs(int u)
    {
        long long int s=val[u];
        vis[u]=true;
        for(int i=0;i<(int)adj[u].size();i++)
        {
            if(!vis[adj[u][i]])
            s+=dfs(adj[u][i]);
        }
        totsum+=s;
        return s;
    }
     
    int main()
    {
        cin>>n>>X;
        queue <int> q;
        for(int i=1;i<=n;i++)
        {
            cin>>val[i];
        }int u,v;
        for(int i=0;i<n-1;i++)
        {
            cin>>u>>v;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        q.push(1);int pos=-1;int flag=0;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            vis[top]=true;
            int size=adj[top].size();
            if((top==1&&size<=1)||(top!=1&&size<=2))
            {   
                pos=top;
                val[n+1]=X;
                adj[n+1].push_back(top);
                adj[top].push_back(n+1);
                break;
            }
            for(int i=0;i<(int)adj[top].size();i++)
            {
                if(!vis[adj[top][i]])
                {
                    q.push(adj[top][i]);
                }
            }
        }
        memset(vis,false,sizeof vis);
        dfs(1);
        cout<<totsum<<endl;
    }
